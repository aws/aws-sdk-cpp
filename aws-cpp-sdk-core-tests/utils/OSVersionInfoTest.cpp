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

#include <aws/core/platform/OSVersionInfo.h>
#include <aws/external/gtest.h>
#include <aws/testing/MemoryTesting.h>

using namespace Aws::Utils;

TEST(OSVersionInfoTest, TestComputeVersionString)
{
  AWS_BEGIN_MEMORY_TEST(16, 10)

  Aws::String versionString = Aws::OSVersionInfo::ComputeOSVersionString();
  ASSERT_TRUE(versionString.length() > 0);

  AWS_END_MEMORY_TEST
}

