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
enum class DaemonDeploymentRollbackMonitorsStatus { NOT_SET, TRIGGERED, MONITORING, MONITORING_COMPLETE, DISABLED };

namespace DaemonDeploymentRollbackMonitorsStatusMapper {
AWS_ECS_API DaemonDeploymentRollbackMonitorsStatus GetDaemonDeploymentRollbackMonitorsStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDaemonDeploymentRollbackMonitorsStatus(DaemonDeploymentRollbackMonitorsStatus value);
}  // namespace DaemonDeploymentRollbackMonitorsStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
