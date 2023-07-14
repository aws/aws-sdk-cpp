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
  enum class TaskDefinitionField
  {
    NOT_SET,
    TAGS
  };

namespace TaskDefinitionFieldMapper
{
AWS_ECS_API TaskDefinitionField GetTaskDefinitionFieldForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForTaskDefinitionField(TaskDefinitionField value);
} // namespace TaskDefinitionFieldMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
