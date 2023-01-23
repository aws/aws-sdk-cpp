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
  enum class TaskExecutionStatus
  {
    NOT_SET,
    QUEUED,
    LAUNCHING,
    PREPARING,
    TRANSFERRING,
    VERIFYING,
    SUCCESS,
    ERROR_
  };

namespace TaskExecutionStatusMapper
{
AWS_DATASYNC_API TaskExecutionStatus GetTaskExecutionStatusForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForTaskExecutionStatus(TaskExecutionStatus value);
} // namespace TaskExecutionStatusMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
