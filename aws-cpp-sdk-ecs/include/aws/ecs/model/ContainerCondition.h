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
  enum class ContainerCondition
  {
    NOT_SET,
    START,
    COMPLETE,
    SUCCESS,
    HEALTHY
  };

namespace ContainerConditionMapper
{
AWS_ECS_API ContainerCondition GetContainerConditionForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForContainerCondition(ContainerCondition value);
} // namespace ContainerConditionMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
