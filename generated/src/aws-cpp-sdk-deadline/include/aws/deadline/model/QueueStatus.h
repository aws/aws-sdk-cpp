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
  enum class QueueStatus
  {
    NOT_SET,
    IDLE,
    SCHEDULING,
    SCHEDULING_BLOCKED
  };

namespace QueueStatusMapper
{
AWS_DEADLINE_API QueueStatus GetQueueStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForQueueStatus(QueueStatus value);
} // namespace QueueStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
