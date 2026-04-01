/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/DaemonDeploymentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace DaemonDeploymentStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int STOP_REQUESTED_HASH = HashingUtils::HashString("STOP_REQUESTED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int ROLLBACK_IN_PROGRESS_HASH = HashingUtils::HashString("ROLLBACK_IN_PROGRESS");
static const int ROLLBACK_SUCCESSFUL_HASH = HashingUtils::HashString("ROLLBACK_SUCCESSFUL");
static const int ROLLBACK_FAILED_HASH = HashingUtils::HashString("ROLLBACK_FAILED");

DaemonDeploymentStatus GetDaemonDeploymentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return DaemonDeploymentStatus::PENDING;
  } else if (hashCode == SUCCESSFUL_HASH) {
    return DaemonDeploymentStatus::SUCCESSFUL;
  } else if (hashCode == STOPPED_HASH) {
    return DaemonDeploymentStatus::STOPPED;
  } else if (hashCode == STOP_REQUESTED_HASH) {
    return DaemonDeploymentStatus::STOP_REQUESTED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return DaemonDeploymentStatus::IN_PROGRESS;
  } else if (hashCode == ROLLBACK_IN_PROGRESS_HASH) {
    return DaemonDeploymentStatus::ROLLBACK_IN_PROGRESS;
  } else if (hashCode == ROLLBACK_SUCCESSFUL_HASH) {
    return DaemonDeploymentStatus::ROLLBACK_SUCCESSFUL;
  } else if (hashCode == ROLLBACK_FAILED_HASH) {
    return DaemonDeploymentStatus::ROLLBACK_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DaemonDeploymentStatus>(hashCode);
  }

  return DaemonDeploymentStatus::NOT_SET;
}

Aws::String GetNameForDaemonDeploymentStatus(DaemonDeploymentStatus enumValue) {
  switch (enumValue) {
    case DaemonDeploymentStatus::NOT_SET:
      return {};
    case DaemonDeploymentStatus::PENDING:
      return "PENDING";
    case DaemonDeploymentStatus::SUCCESSFUL:
      return "SUCCESSFUL";
    case DaemonDeploymentStatus::STOPPED:
      return "STOPPED";
    case DaemonDeploymentStatus::STOP_REQUESTED:
      return "STOP_REQUESTED";
    case DaemonDeploymentStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case DaemonDeploymentStatus::ROLLBACK_IN_PROGRESS:
      return "ROLLBACK_IN_PROGRESS";
    case DaemonDeploymentStatus::ROLLBACK_SUCCESSFUL:
      return "ROLLBACK_SUCCESSFUL";
    case DaemonDeploymentStatus::ROLLBACK_FAILED:
      return "ROLLBACK_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DaemonDeploymentStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
