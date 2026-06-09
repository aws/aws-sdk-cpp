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
enum class DeploymentLifecycleHookStatus { NOT_SET, AWAITING_ACTION, IN_PROGRESS, SUCCEEDED, FAILED, TIMED_OUT };

namespace DeploymentLifecycleHookStatusMapper {
AWS_ECS_API DeploymentLifecycleHookStatus GetDeploymentLifecycleHookStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDeploymentLifecycleHookStatus(DeploymentLifecycleHookStatus value);
}  // namespace DeploymentLifecycleHookStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
