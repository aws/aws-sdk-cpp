/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/logging/DefaultLogSystem.h>
#include <aws/core/utils/logging/AWSLogging.h>

#include <iostream>

static const char* ALLOCATION_TAG = "AndroidTests";

#include <jni.h>
#include <aws/testing/android/AndroidTesting.h>
#include <aws/core/utils/logging/android/LogcatLogSystem.h>
#include <aws/core/utils/logging/NullLogSystem.h>
#include <aws/core/utils/logging/LogMacros.h>

#pragma GCC diagnostic ignored "-Wwrite-strings"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

JNIEXPORT jint JNICALL
Java_aws_coretests_TestActivity_runTests( JNIEnv* env, jobject thisRef )
{
  RedirectStdoutToLogcat();

  std::cout << "Running all enabled Android tests" << std::endl;

  int dummy = 1;
  static char *dummy2 = "Stuff";

  Aws::Utils::Logging::InitializeAWSLogging(Aws::MakeShared<Aws::Utils::Logging::LogcatLogSystem>(ALLOCATION_TAG, Aws::Utils::Logging::LogLevel::Trace));
  ::testing::InitGoogleTest(&dummy, &dummy2);
  auto result = RUN_ALL_TESTS();

  std::this_thread::sleep_for(std::chrono::seconds(3));

  Aws::Utils::Logging::ShutdownAWSLogging();

  return static_cast<jint>(result);
}

#ifdef __cplusplus
}
#endif // __cplusplus




