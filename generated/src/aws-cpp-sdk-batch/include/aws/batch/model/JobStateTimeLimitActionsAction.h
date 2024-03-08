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
  enum class JobStateTimeLimitActionsAction
  {
    NOT_SET,
    CANCEL
  };

namespace JobStateTimeLimitActionsActionMapper
{
AWS_BATCH_API JobStateTimeLimitActionsAction GetJobStateTimeLimitActionsActionForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForJobStateTimeLimitActionsAction(JobStateTimeLimitActionsAction value);
} // namespace JobStateTimeLimitActionsActionMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
