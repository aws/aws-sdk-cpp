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
  enum class TaskType
  {
    NOT_SET,
    EVALUATION,
    LABELING_SET_GENERATION,
    IMPORT_LABELS,
    EXPORT_LABELS,
    FIND_MATCHES
  };

namespace TaskTypeMapper
{
AWS_GLUE_API TaskType GetTaskTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTaskType(TaskType value);
} // namespace TaskTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
