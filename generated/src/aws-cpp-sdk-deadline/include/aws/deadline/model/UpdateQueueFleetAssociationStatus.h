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
  enum class UpdateQueueFleetAssociationStatus
  {
    NOT_SET,
    ACTIVE,
    STOP_SCHEDULING_AND_COMPLETE_TASKS,
    STOP_SCHEDULING_AND_CANCEL_TASKS
  };

namespace UpdateQueueFleetAssociationStatusMapper
{
AWS_DEADLINE_API UpdateQueueFleetAssociationStatus GetUpdateQueueFleetAssociationStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForUpdateQueueFleetAssociationStatus(UpdateQueueFleetAssociationStatus value);
} // namespace UpdateQueueFleetAssociationStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
