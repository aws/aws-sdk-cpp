/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/platform/OSVersionInfo.h>
#include <aws/external/gtest.h>

using namespace Aws::Utils;

TEST(OSVersionInfoTest, TestComputeVersionString)
{
  Aws::String versionString = Aws::OSVersionInfo::ComputeOSVersionString();
  ASSERT_TRUE(versionString.length() > 0);
}

