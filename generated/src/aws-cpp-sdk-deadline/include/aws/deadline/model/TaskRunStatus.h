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
  enum class TaskRunStatus
  {
    NOT_SET,
    PENDING,
    READY,
    ASSIGNED,
    STARTING,
    SCHEDULED,
    INTERRUPTING,
    RUNNING,
    SUSPENDED,
    CANCELED,
    FAILED,
    SUCCEEDED,
    NOT_COMPATIBLE
  };

namespace TaskRunStatusMapper
{
AWS_DEADLINE_API TaskRunStatus GetTaskRunStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForTaskRunStatus(TaskRunStatus value);
} // namespace TaskRunStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
