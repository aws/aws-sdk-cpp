/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/DeploymentLifecycleHookStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace DeploymentLifecycleHookStatusMapper {

static const int AWAITING_ACTION_HASH = HashingUtils::HashString("AWAITING_ACTION");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");

DeploymentLifecycleHookStatus GetDeploymentLifecycleHookStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWAITING_ACTION_HASH) {
    return DeploymentLifecycleHookStatus::AWAITING_ACTION;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return DeploymentLifecycleHookStatus::IN_PROGRESS;
  } else if (hashCode == SUCCEEDED_HASH) {
    return DeploymentLifecycleHookStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return DeploymentLifecycleHookStatus::FAILED;
  } else if (hashCode == TIMED_OUT_HASH) {
    return DeploymentLifecycleHookStatus::TIMED_OUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeploymentLifecycleHookStatus>(hashCode);
  }

  return DeploymentLifecycleHookStatus::NOT_SET;
}

Aws::String GetNameForDeploymentLifecycleHookStatus(DeploymentLifecycleHookStatus enumValue) {
  switch (enumValue) {
    case DeploymentLifecycleHookStatus::NOT_SET:
      return {};
    case DeploymentLifecycleHookStatus::AWAITING_ACTION:
      return "AWAITING_ACTION";
    case DeploymentLifecycleHookStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case DeploymentLifecycleHookStatus::SUCCEEDED:
      return "SUCCEEDED";
    case DeploymentLifecycleHookStatus::FAILED:
      return "FAILED";
    case DeploymentLifecycleHookStatus::TIMED_OUT:
      return "TIMED_OUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeploymentLifecycleHookStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
