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
  enum class TestCaseRunStatus
  {
    NOT_SET,
    Success,
    Running,
    Failed
  };

namespace TestCaseRunStatusMapper
{
AWS_APPTEST_API TestCaseRunStatus GetTestCaseRunStatusForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForTestCaseRunStatus(TestCaseRunStatus value);
} // namespace TestCaseRunStatusMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
