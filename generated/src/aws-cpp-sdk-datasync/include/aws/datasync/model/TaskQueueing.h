/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class TaskQueueing
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace TaskQueueingMapper
{
AWS_DATASYNC_API TaskQueueing GetTaskQueueingForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForTaskQueueing(TaskQueueing value);
} // namespace TaskQueueingMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
