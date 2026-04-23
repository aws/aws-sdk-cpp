#include <aws/core/Aws.h>
#include <aws/core/utils/logging/LogLevel.h>
#include <aws/s3/S3Client.h>
#include <iostream>

using namespace Aws;

int main(int argc, char *argv[])
{
    SDKOptions options;
    options.loggingOptions.logLevel = Utils::Logging::LogLevel::Warn;
    InitAPI(options);
    {
        S3::S3Client client;

        auto outcome = client.ListBuckets();
        if (outcome.IsSuccess()) {
            std::cout << "Found " << outcome.GetResult().GetBuckets().size() << " buckets\n";
            for (auto&& b : outcome.GetResult().GetBuckets()) {
                std::cout << b.GetName() << std::endl;
            }
        } else {
            std::cout << "Failed with error: " << outcome.GetError() << std::endl;
        }
    }

    ShutdownAPI(options);
    return 0;
}
