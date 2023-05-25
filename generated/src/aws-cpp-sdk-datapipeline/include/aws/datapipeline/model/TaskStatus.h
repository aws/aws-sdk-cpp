/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{
  enum class TaskStatus
  {
    NOT_SET,
    FINISHED,
    FAILED,
    FALSE
  };

namespace TaskStatusMapper
{
AWS_DATAPIPELINE_API TaskStatus GetTaskStatusForName(const Aws::String& name);

AWS_DATAPIPELINE_API Aws::String GetNameForTaskStatus(TaskStatus value);
} // namespace TaskStatusMapper
} // namespace Model
} // namespace DataPipeline
} // namespace Aws
