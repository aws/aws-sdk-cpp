/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/DaemonDeploymentRollbackMonitorsStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace DaemonDeploymentRollbackMonitorsStatusMapper {

static const int TRIGGERED_HASH = HashingUtils::HashString("TRIGGERED");
static const int MONITORING_HASH = HashingUtils::HashString("MONITORING");
static const int MONITORING_COMPLETE_HASH = HashingUtils::HashString("MONITORING_COMPLETE");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

DaemonDeploymentRollbackMonitorsStatus GetDaemonDeploymentRollbackMonitorsStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TRIGGERED_HASH) {
    return DaemonDeploymentRollbackMonitorsStatus::TRIGGERED;
  } else if (hashCode == MONITORING_HASH) {
    return DaemonDeploymentRollbackMonitorsStatus::MONITORING;
  } else if (hashCode == MONITORING_COMPLETE_HASH) {
    return DaemonDeploymentRollbackMonitorsStatus::MONITORING_COMPLETE;
  } else if (hashCode == DISABLED_HASH) {
    return DaemonDeploymentRollbackMonitorsStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DaemonDeploymentRollbackMonitorsStatus>(hashCode);
  }

  return DaemonDeploymentRollbackMonitorsStatus::NOT_SET;
}

Aws::String GetNameForDaemonDeploymentRollbackMonitorsStatus(DaemonDeploymentRollbackMonitorsStatus enumValue) {
  switch (enumValue) {
    case DaemonDeploymentRollbackMonitorsStatus::NOT_SET:
      return {};
    case DaemonDeploymentRollbackMonitorsStatus::TRIGGERED:
      return "TRIGGERED";
    case DaemonDeploymentRollbackMonitorsStatus::MONITORING:
      return "MONITORING";
    case DaemonDeploymentRollbackMonitorsStatus::MONITORING_COMPLETE:
      return "MONITORING_COMPLETE";
    case DaemonDeploymentRollbackMonitorsStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DaemonDeploymentRollbackMonitorsStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
