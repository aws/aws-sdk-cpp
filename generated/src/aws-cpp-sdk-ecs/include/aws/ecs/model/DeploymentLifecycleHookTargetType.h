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
enum class DeploymentLifecycleHookTargetType { NOT_SET, AWS_LAMBDA, PAUSE };

namespace DeploymentLifecycleHookTargetTypeMapper {
AWS_ECS_API DeploymentLifecycleHookTargetType GetDeploymentLifecycleHookTargetTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDeploymentLifecycleHookTargetType(DeploymentLifecycleHookTargetType value);
}  // namespace DeploymentLifecycleHookTargetTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
