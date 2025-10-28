/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class DeploymentStrategy { NOT_SET, ROLLING, BLUE_GREEN, LINEAR, CANARY };

namespace DeploymentStrategyMapper {
AWS_ECS_API DeploymentStrategy GetDeploymentStrategyForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDeploymentStrategy(DeploymentStrategy value);
}  // namespace DeploymentStrategyMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
