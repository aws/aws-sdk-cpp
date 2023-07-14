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
  enum class TaskDefinitionPlacementConstraintType
  {
    NOT_SET,
    memberOf
  };

namespace TaskDefinitionPlacementConstraintTypeMapper
{
AWS_ECS_API TaskDefinitionPlacementConstraintType GetTaskDefinitionPlacementConstraintTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForTaskDefinitionPlacementConstraintType(TaskDefinitionPlacementConstraintType value);
} // namespace TaskDefinitionPlacementConstraintTypeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
