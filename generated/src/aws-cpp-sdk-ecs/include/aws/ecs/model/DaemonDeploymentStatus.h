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
enum class DaemonDeploymentStatus {
  NOT_SET,
  PENDING,
  SUCCESSFUL,
  STOPPED,
  STOP_REQUESTED,
  IN_PROGRESS,
  ROLLBACK_IN_PROGRESS,
  ROLLBACK_SUCCESSFUL,
  ROLLBACK_FAILED
};

namespace DaemonDeploymentStatusMapper {
AWS_ECS_API DaemonDeploymentStatus GetDaemonDeploymentStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDaemonDeploymentStatus(DaemonDeploymentStatus value);
}  // namespace DaemonDeploymentStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
