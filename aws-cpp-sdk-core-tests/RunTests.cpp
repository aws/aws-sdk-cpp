/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/external/gtest.h>
#include <aws/core/Aws.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/MemoryTesting.h>

#if defined(HAS_UMASK)
#include <sys/stat.h>
#endif

int main(int argc, char** argv)
{
#if defined(HAS_UMASK)
    // In order to fix github issue at https://github.com/aws/aws-sdk-cpp/issues/232
    // Created dir by this process will be set with mode 0777, so that multiple users can build on the same machine
    umask(0);
#endif

    Aws::Testing::RedirectHomeToTempIfAppropriate();

    Aws::SDKOptions options;	
    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
    options.httpOptions.installSigPipeHandler = true;
    AWS_BEGIN_MEMORY_TEST_EX(options, 1024, 128);

    Aws::Testing::InitPlatformTest(options);
    Aws::InitAPI(options);
    ::testing::InitGoogleTest(&argc, argv);
    int retVal = RUN_ALL_TESTS();
    Aws::ShutdownAPI(options);
    AWS_END_MEMORY_TEST_EX;

    Aws::Testing::ShutdownPlatformTest(options);

    return retVal;
}
