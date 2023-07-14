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
  enum class TaskField
  {
    NOT_SET,
    TAGS
  };

namespace TaskFieldMapper
{
AWS_ECS_API TaskField GetTaskFieldForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForTaskField(TaskField value);
} // namespace TaskFieldMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
