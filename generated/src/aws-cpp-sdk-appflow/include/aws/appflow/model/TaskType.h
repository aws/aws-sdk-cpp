/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class TaskType
  {
    NOT_SET,
    Arithmetic,
    Filter,
    Map,
    Map_all,
    Mask,
    Merge,
    Passthrough,
    Truncate,
    Validate,
    Partition
  };

namespace TaskTypeMapper
{
AWS_APPFLOW_API TaskType GetTaskTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForTaskType(TaskType value);
} // namespace TaskTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
