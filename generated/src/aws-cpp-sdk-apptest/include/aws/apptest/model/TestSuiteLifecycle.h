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
  enum class TestSuiteLifecycle
  {
    NOT_SET,
    Creating,
    Updating,
    Active,
    Failed,
    Deleting
  };

namespace TestSuiteLifecycleMapper
{
AWS_APPTEST_API TestSuiteLifecycle GetTestSuiteLifecycleForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForTestSuiteLifecycle(TestSuiteLifecycle value);
} // namespace TestSuiteLifecycleMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
