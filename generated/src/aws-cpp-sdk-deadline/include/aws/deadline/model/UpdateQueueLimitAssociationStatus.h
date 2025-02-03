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
  enum class UpdateQueueLimitAssociationStatus
  {
    NOT_SET,
    ACTIVE,
    STOP_LIMIT_USAGE_AND_COMPLETE_TASKS,
    STOP_LIMIT_USAGE_AND_CANCEL_TASKS
  };

namespace UpdateQueueLimitAssociationStatusMapper
{
AWS_DEADLINE_API UpdateQueueLimitAssociationStatus GetUpdateQueueLimitAssociationStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForUpdateQueueLimitAssociationStatus(UpdateQueueLimitAssociationStatus value);
} // namespace UpdateQueueLimitAssociationStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
