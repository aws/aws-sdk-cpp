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
  enum class StepRunStatus
  {
    NOT_SET,
    Success,
    Failed,
    Running
  };

namespace StepRunStatusMapper
{
AWS_APPTEST_API StepRunStatus GetStepRunStatusForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForStepRunStatus(StepRunStatus value);
} // namespace StepRunStatusMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
