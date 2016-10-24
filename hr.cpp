//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("menu.cpp", menuForm);
USEFORM("password.cpp", passwordForm);
USEFORM("config.cpp", configForm);
USEFORM("experience.cpp", experienceForm);
USEFORM("guide.cpp", guideForm);
USEFORM("auto.cpp", autoForm);
USEFORM("autointro.cpp", autointroForm);
USEFORM("automoving.cpp", automovingForm);
USEFORM("autoclass.cpp", autotclassForm);
USEFORM("autorobot.cpp", autorobotForm);
USEFORM("autobye.cpp", autobyeForm);
USEFORM("chargin.cpp", charginForm);
USEFORM("manualguide.cpp", manualguideForm);
USEFORM("manualintro.cpp", manualintroForm);
USEFORM("manual.cpp", manualForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TpasswordForm), &passwordForm);
		Application->CreateForm(__classid(TmenuForm), &menuForm);
		Application->CreateForm(__classid(TconfigForm), &configForm);
		Application->CreateForm(__classid(TguideForm), &guideForm);
		Application->CreateForm(__classid(TexperienceForm), &experienceForm);
		Application->CreateForm(__classid(TautoForm), &autoForm);
		Application->CreateForm(__classid(TautointroForm), &autointroForm);
		Application->CreateForm(__classid(TautomovingForm), &automovingForm);
		Application->CreateForm(__classid(TautotclassForm), &autotclassForm);
		Application->CreateForm(__classid(TautorobotForm), &autorobotForm);
		Application->CreateForm(__classid(TautobyeForm), &autobyeForm);
		Application->CreateForm(__classid(TcharginForm), &charginForm);
		Application->CreateForm(__classid(TmanualguideForm), &manualguideForm);
		Application->CreateForm(__classid(TmanualintroForm), &manualintroForm);
		Application->CreateForm(__classid(TmanualForm), &manualForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
