/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/external/gtest.h>
#include <aws/core/Aws.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/testing/MemoryTesting.h>

void ParseArgs(int argc, char** argv, Aws::SDKOptions& options)
{
    // std::string rather than Aws::String since this happens before the memory manager is initialized
    const std::string resourcePrefixOption = "--rfc3986_compliant=";
    // list other options here
    for(int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];
        if(arg.find(resourcePrefixOption) == 0)
        {
            arg = arg.substr(resourcePrefixOption.length()); // get whatever value after the '='
            if (arg == "true" || arg == "1")
            {
                std::cout << "Set RFC3986 compliance mode ON." << std::endl;
                options.httpOptions.compliantRfc3986Encoding = true;
            }
        }
    }
}

int main(int argc, char** argv)
{
    Aws::SDKOptions options;
    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
    AWS_BEGIN_MEMORY_TEST_EX(options, 1024, 128);
    Aws::Testing::InitPlatformTest(options);
    Aws::Testing::ParseArgs(argc, argv);
    ParseArgs(argc, argv, options);

    Aws::InitAPI(options);
    ::testing::InitGoogleTest(&argc, argv);
    int exitCode = RUN_ALL_TESTS();
    Aws::ShutdownAPI(options);

    AWS_END_MEMORY_TEST_EX;
    Aws::Testing::ShutdownPlatformTest(options);
    return exitCode;
}
