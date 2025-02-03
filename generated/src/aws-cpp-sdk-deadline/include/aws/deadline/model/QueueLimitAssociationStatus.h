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
  enum class QueueLimitAssociationStatus
  {
    NOT_SET,
    ACTIVE,
    STOP_LIMIT_USAGE_AND_COMPLETE_TASKS,
    STOP_LIMIT_USAGE_AND_CANCEL_TASKS,
    STOPPED
  };

namespace QueueLimitAssociationStatusMapper
{
AWS_DEADLINE_API QueueLimitAssociationStatus GetQueueLimitAssociationStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForQueueLimitAssociationStatus(QueueLimitAssociationStatus value);
} // namespace QueueLimitAssociationStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
