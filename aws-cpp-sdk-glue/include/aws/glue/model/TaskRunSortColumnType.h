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
  enum class TaskRunSortColumnType
  {
    NOT_SET,
    TASK_RUN_TYPE,
    STATUS,
    STARTED
  };

namespace TaskRunSortColumnTypeMapper
{
AWS_GLUE_API TaskRunSortColumnType GetTaskRunSortColumnTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTaskRunSortColumnType(TaskRunSortColumnType value);
} // namespace TaskRunSortColumnTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
