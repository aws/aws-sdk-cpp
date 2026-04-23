/*
  * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
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
