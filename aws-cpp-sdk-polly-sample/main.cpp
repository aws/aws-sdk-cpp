
#include <aws/core/Aws.h>
#include <aws/polly-to-output/TextToSpeechManager.h>
#include <iostream>

using namespace Aws::Polly;
using namespace Aws::PollyToOutput;

int main()
{
    Aws::SDKOptions options;
    Aws::InitAPI(options);
    {
        std::shared_ptr<PollyClient> client = Aws::MakeShared<PollyClient>("blah");
        TextToSpeechManager manager(client);

        std::cout << "available devices are: " << std::endl;
        auto devices = manager.EnumerateDevices();

        for (auto& device : devices)
        {
            std::cout << "[" << device.first.deviceId << "] " << device.first.deviceName << "   Driver: "
                      << device.second->GetName() << std::endl;
        }

        std::cout << "please select deviceid to play output to:" << std::endl;

        Aws::String deviceId;
        std::getline(std::cin, deviceId);

        for (auto& device : devices)
        {
            if (device.first.deviceId == deviceId)
            {
                manager.SetActiveDevice(device.second, device.first, device.first.capabilities[0]);
            }
        }

        std::cout << "available voices are: " << std::endl;
        for (auto& voice : manager.ListAvailableVoices())
        {
            std::cout << voice.first << "    language: " << voice.second << std::endl;
        }

        std::cout << "please select voice you would like me to render." << std::endl;

        Aws::String voice;
        std::getline(std::cin, voice);
        manager.SetActiveVoice(voice);

        SendTextCompletedHandler handler;

        std::cout << "What would you like me to say?" << std::endl;
        Aws::String line;
        while (std::getline(std::cin, line))
        {
            if (line == "exit")
            {
                goto end;
            }

            manager.SendTextToOutputDevice(line.c_str(), handler);
            std::cout << "Anything else?" << std::endl;
        }
    }
    end:
    Aws::ShutdownAPI(options);
    return 0;
}
