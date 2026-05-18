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
enum class DeploymentLifecycleHookAction { NOT_SET, ROLLBACK, CONTINUE };

namespace DeploymentLifecycleHookActionMapper {
AWS_ECS_API DeploymentLifecycleHookAction GetDeploymentLifecycleHookActionForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDeploymentLifecycleHookAction(DeploymentLifecycleHookAction value);
}  // namespace DeploymentLifecycleHookActionMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
