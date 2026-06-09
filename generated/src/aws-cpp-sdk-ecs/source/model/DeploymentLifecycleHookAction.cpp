/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/DeploymentLifecycleHookAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace DeploymentLifecycleHookActionMapper {

static const int ROLLBACK_HASH = HashingUtils::HashString("ROLLBACK");
static const int CONTINUE_HASH = HashingUtils::HashString("CONTINUE");

DeploymentLifecycleHookAction GetDeploymentLifecycleHookActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ROLLBACK_HASH) {
    return DeploymentLifecycleHookAction::ROLLBACK;
  } else if (hashCode == CONTINUE_HASH) {
    return DeploymentLifecycleHookAction::CONTINUE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeploymentLifecycleHookAction>(hashCode);
  }

  return DeploymentLifecycleHookAction::NOT_SET;
}

Aws::String GetNameForDeploymentLifecycleHookAction(DeploymentLifecycleHookAction enumValue) {
  switch (enumValue) {
    case DeploymentLifecycleHookAction::NOT_SET:
      return {};
    case DeploymentLifecycleHookAction::ROLLBACK:
      return "ROLLBACK";
    case DeploymentLifecycleHookAction::CONTINUE:
      return "CONTINUE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeploymentLifecycleHookActionMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
