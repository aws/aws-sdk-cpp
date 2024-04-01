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
  enum class QueueFleetAssociationStatus
  {
    NOT_SET,
    ACTIVE,
    STOP_SCHEDULING_AND_COMPLETE_TASKS,
    STOP_SCHEDULING_AND_CANCEL_TASKS,
    STOPPED
  };

namespace QueueFleetAssociationStatusMapper
{
AWS_DEADLINE_API QueueFleetAssociationStatus GetQueueFleetAssociationStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForQueueFleetAssociationStatus(QueueFleetAssociationStatus value);
} // namespace QueueFleetAssociationStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
