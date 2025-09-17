/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Aws.h>
#include <aws/testing/MemoryTesting.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <gtest/gtest.h>

int main(int argc, char** argv) {
  Aws::SDKOptions options;
  options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;

  AWS_BEGIN_MEMORY_TEST_EX(options, 1024, 128);
  Aws::Testing::InitPlatformTest(options);
  Aws::Testing::ParseArgs(argc, argv);

  Aws::InitAPI(options);
  Aws::Environment::SetEnv("AWS_EC2_METADATA_DISABLED", "true", true);
  ::testing::InitGoogleTest(&argc, argv);
  int exitCode = RUN_ALL_TESTS();
  Aws::ShutdownAPI(options);

  AWS_END_MEMORY_TEST_EX;
  Aws::Testing::ShutdownPlatformTest(options);
  return exitCode;
}
