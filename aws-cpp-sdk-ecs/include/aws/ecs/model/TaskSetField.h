/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class TaskSetField
  {
    NOT_SET,
    TAGS
  };

namespace TaskSetFieldMapper
{
AWS_ECS_API TaskSetField GetTaskSetFieldForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForTaskSetField(TaskSetField value);
} // namespace TaskSetFieldMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
