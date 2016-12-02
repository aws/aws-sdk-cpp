
#include <aws/core/Aws.h>
#include <aws/polly-to-output/TextToSpeechManager.h>
#include <iostream>

using namespace Aws::Polly;
using namespace Aws::PollyToOutput;

int main()
{
    Aws::SDKOptions options;
    Aws::InitAPI(options);

    std::shared_ptr<PollyClient> client = Aws::MakeShared<PollyClient>("blah");
    TextToSpeechManager manager(client);

    std::cout << "available devices are: " << std::endl;
    auto devices = manager.EnumerateDevices();

    for (auto& device : devices)
    {
        std::cout << "[" << device.deviceId << "] " << device.deviceName << std::endl;
    }

    std::cout << "plese select deviceid to play output to:" << std::endl;
    
    Aws::String deviceId;
    std::getline(std::cin, deviceId);

    for (auto& device : devices)
    {
        if (device.deviceId == deviceId)
        {
            manager.SetActiveDevice(device, device.capabilities[1]);
        }
    }

    SendTextCompletedHandler handler;

    std::cout << "What would you like me to say?" << std::endl;
    Aws::String line;
    while(std::getline(std::cin, line))
    { 
        if (line == "exit")
        {
            Aws::ShutdownAPI(options);
            return 0;
        }

        manager.SendTextToOutputDevice(line.c_str(), handler);
        std::cout << "Anything else?" << std::endl;
    }

    Aws::ShutdownAPI(options);
    return 0;
}
