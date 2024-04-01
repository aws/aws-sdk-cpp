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
  enum class StepLifecycleStatus
  {
    NOT_SET,
    CREATE_COMPLETE,
    UPDATE_IN_PROGRESS,
    UPDATE_FAILED,
    UPDATE_SUCCEEDED
  };

namespace StepLifecycleStatusMapper
{
AWS_DEADLINE_API StepLifecycleStatus GetStepLifecycleStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForStepLifecycleStatus(StepLifecycleStatus value);
} // namespace StepLifecycleStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
