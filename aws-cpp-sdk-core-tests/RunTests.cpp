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
#include <aws/core/utils/crypto/Factories.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/Aws.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/MemoryTesting.h>
#include <aws/testing/mocks/http/MockHttpClient.h>

#if !defined(_WIN32) && !defined(ORBIS)
#include <sys/stat.h>
#endif

int main(int argc, char** argv)
{
#if !defined(_WIN32) && !defined(ORBIS)
	// In order to fix github issue at https://github.com/aws/aws-sdk-cpp/issues/232
    // Created dir by this process will be set with mode 0777, so that multiple users can build on the same machine
	umask(0);
#endif

    Aws::Testing::RedirectHomeToTempIfAppropriate();

    Aws::SDKOptions options;	

    ExactTestMemorySystem memorySystem(16, 10);
    options.memoryManagementOptions.memoryManager = &memorySystem;
    Aws::Testing::InitPlatformTest(options);

    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
    options.httpOptions.installSigPipeHandler = true;

    Aws::InitAPI(options);
    ::testing::InitGoogleTest(&argc, argv);
    int retVal = RUN_ALL_TESTS();
    Aws::ShutdownAPI(options);
    EXPECT_EQ(memorySystem.GetCurrentOutstandingAllocations(), 0ULL);
    EXPECT_EQ(memorySystem.GetCurrentBytesAllocated(), 0ULL);
    EXPECT_TRUE(memorySystem.IsClean());

    Aws::Testing::ShutdownPlatformTest(options);

    return retVal;
}
