/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class ContainerDependencyCondition
  {
    NOT_SET,
    START,
    COMPLETE,
    SUCCESS,
    HEALTHY
  };

namespace ContainerDependencyConditionMapper
{
AWS_GAMELIFT_API ContainerDependencyCondition GetContainerDependencyConditionForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForContainerDependencyCondition(ContainerDependencyCondition value);
} // namespace ContainerDependencyConditionMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
