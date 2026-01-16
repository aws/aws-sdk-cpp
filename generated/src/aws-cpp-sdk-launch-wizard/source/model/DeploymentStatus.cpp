/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/launch-wizard/model/DeploymentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace LaunchWizard {
namespace Model {
namespace DeploymentStatusMapper {

static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
static const int DELETE_INITIATING_HASH = HashingUtils::HashString("DELETE_INITIATING");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
static const int UPDATE_COMPLETED_HASH = HashingUtils::HashString("UPDATE_COMPLETED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int UPDATE_ROLLBACK_COMPLETED_HASH = HashingUtils::HashString("UPDATE_ROLLBACK_COMPLETED");
static const int UPDATE_ROLLBACK_FAILED_HASH = HashingUtils::HashString("UPDATE_ROLLBACK_FAILED");

DeploymentStatus GetDeploymentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLETED_HASH) {
    return DeploymentStatus::COMPLETED;
  } else if (hashCode == CREATING_HASH) {
    return DeploymentStatus::CREATING;
  } else if (hashCode == DELETE_IN_PROGRESS_HASH) {
    return DeploymentStatus::DELETE_IN_PROGRESS;
  } else if (hashCode == DELETE_INITIATING_HASH) {
    return DeploymentStatus::DELETE_INITIATING;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return DeploymentStatus::DELETE_FAILED;
  } else if (hashCode == DELETED_HASH) {
    return DeploymentStatus::DELETED;
  } else if (hashCode == FAILED_HASH) {
    return DeploymentStatus::FAILED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return DeploymentStatus::IN_PROGRESS;
  } else if (hashCode == VALIDATING_HASH) {
    return DeploymentStatus::VALIDATING;
  } else if (hashCode == UPDATE_IN_PROGRESS_HASH) {
    return DeploymentStatus::UPDATE_IN_PROGRESS;
  } else if (hashCode == UPDATE_COMPLETED_HASH) {
    return DeploymentStatus::UPDATE_COMPLETED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return DeploymentStatus::UPDATE_FAILED;
  } else if (hashCode == UPDATE_ROLLBACK_COMPLETED_HASH) {
    return DeploymentStatus::UPDATE_ROLLBACK_COMPLETED;
  } else if (hashCode == UPDATE_ROLLBACK_FAILED_HASH) {
    return DeploymentStatus::UPDATE_ROLLBACK_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeploymentStatus>(hashCode);
  }

  return DeploymentStatus::NOT_SET;
}

Aws::String GetNameForDeploymentStatus(DeploymentStatus enumValue) {
  switch (enumValue) {
    case DeploymentStatus::NOT_SET:
      return {};
    case DeploymentStatus::COMPLETED:
      return "COMPLETED";
    case DeploymentStatus::CREATING:
      return "CREATING";
    case DeploymentStatus::DELETE_IN_PROGRESS:
      return "DELETE_IN_PROGRESS";
    case DeploymentStatus::DELETE_INITIATING:
      return "DELETE_INITIATING";
    case DeploymentStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    case DeploymentStatus::DELETED:
      return "DELETED";
    case DeploymentStatus::FAILED:
      return "FAILED";
    case DeploymentStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case DeploymentStatus::VALIDATING:
      return "VALIDATING";
    case DeploymentStatus::UPDATE_IN_PROGRESS:
      return "UPDATE_IN_PROGRESS";
    case DeploymentStatus::UPDATE_COMPLETED:
      return "UPDATE_COMPLETED";
    case DeploymentStatus::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case DeploymentStatus::UPDATE_ROLLBACK_COMPLETED:
      return "UPDATE_ROLLBACK_COMPLETED";
    case DeploymentStatus::UPDATE_ROLLBACK_FAILED:
      return "UPDATE_ROLLBACK_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeploymentStatusMapper
}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
