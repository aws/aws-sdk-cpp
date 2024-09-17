/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppTest
{
namespace Model
{
  enum class TestConfigurationLifecycle
  {
    NOT_SET,
    Active,
    Deleting
  };

namespace TestConfigurationLifecycleMapper
{
AWS_APPTEST_API TestConfigurationLifecycle GetTestConfigurationLifecycleForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForTestConfigurationLifecycle(TestConfigurationLifecycle value);
} // namespace TestConfigurationLifecycleMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
