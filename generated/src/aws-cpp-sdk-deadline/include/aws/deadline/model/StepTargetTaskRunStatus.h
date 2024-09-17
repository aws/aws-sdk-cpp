/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class StepTargetTaskRunStatus
  {
    NOT_SET,
    READY,
    FAILED,
    SUCCEEDED,
    CANCELED,
    SUSPENDED,
    PENDING
  };

namespace StepTargetTaskRunStatusMapper
{
AWS_DEADLINE_API StepTargetTaskRunStatus GetStepTargetTaskRunStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForStepTargetTaskRunStatus(StepTargetTaskRunStatus value);
} // namespace StepTargetTaskRunStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
