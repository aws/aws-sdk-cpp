/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class TaskStatusType
  {
    NOT_SET,
    STARTING,
    RUNNING,
    STOPPING,
    STOPPED,
    SUCCEEDED,
    FAILED,
    TIMEOUT
  };

namespace TaskStatusTypeMapper
{
AWS_GLUE_API TaskStatusType GetTaskStatusTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTaskStatusType(TaskStatusType value);
} // namespace TaskStatusTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
