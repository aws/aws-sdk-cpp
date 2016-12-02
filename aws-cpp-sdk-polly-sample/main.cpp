
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
