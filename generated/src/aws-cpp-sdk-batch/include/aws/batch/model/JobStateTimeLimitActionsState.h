/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class JobStateTimeLimitActionsState
  {
    NOT_SET,
    RUNNABLE
  };

namespace JobStateTimeLimitActionsStateMapper
{
AWS_BATCH_API JobStateTimeLimitActionsState GetJobStateTimeLimitActionsStateForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForJobStateTimeLimitActionsState(JobStateTimeLimitActionsState value);
} // namespace JobStateTimeLimitActionsStateMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
