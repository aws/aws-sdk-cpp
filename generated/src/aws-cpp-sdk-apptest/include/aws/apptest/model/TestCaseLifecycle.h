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
  enum class TestCaseLifecycle
  {
    NOT_SET,
    Active,
    Deleting
  };

namespace TestCaseLifecycleMapper
{
AWS_APPTEST_API TestCaseLifecycle GetTestCaseLifecycleForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForTestCaseLifecycle(TestCaseLifecycle value);
} // namespace TestCaseLifecycleMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
