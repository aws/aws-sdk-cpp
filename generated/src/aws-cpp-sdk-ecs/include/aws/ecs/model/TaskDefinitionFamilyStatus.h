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
  enum class TaskDefinitionFamilyStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    ALL
  };

namespace TaskDefinitionFamilyStatusMapper
{
AWS_ECS_API TaskDefinitionFamilyStatus GetTaskDefinitionFamilyStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForTaskDefinitionFamilyStatus(TaskDefinitionFamilyStatus value);
} // namespace TaskDefinitionFamilyStatusMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
