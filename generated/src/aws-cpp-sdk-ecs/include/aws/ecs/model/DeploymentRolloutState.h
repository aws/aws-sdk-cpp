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
  enum class DeploymentRolloutState
  {
    NOT_SET,
    COMPLETED,
    FAILED,
    IN_PROGRESS
  };

namespace DeploymentRolloutStateMapper
{
AWS_ECS_API DeploymentRolloutState GetDeploymentRolloutStateForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDeploymentRolloutState(DeploymentRolloutState value);
} // namespace DeploymentRolloutStateMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
