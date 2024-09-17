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
  enum class TestRunStatus
  {
    NOT_SET,
    Success,
    Running,
    Failed,
    Deleting
  };

namespace TestRunStatusMapper
{
AWS_APPTEST_API TestRunStatus GetTestRunStatusForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForTestRunStatus(TestRunStatus value);
} // namespace TestRunStatusMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
