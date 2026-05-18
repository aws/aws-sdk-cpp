/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/DeploymentLifecycleHookTargetType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace DeploymentLifecycleHookTargetTypeMapper {

static const int AWS_LAMBDA_HASH = HashingUtils::HashString("AWS_LAMBDA");
static const int PAUSE_HASH = HashingUtils::HashString("PAUSE");

DeploymentLifecycleHookTargetType GetDeploymentLifecycleHookTargetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_LAMBDA_HASH) {
    return DeploymentLifecycleHookTargetType::AWS_LAMBDA;
  } else if (hashCode == PAUSE_HASH) {
    return DeploymentLifecycleHookTargetType::PAUSE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeploymentLifecycleHookTargetType>(hashCode);
  }

  return DeploymentLifecycleHookTargetType::NOT_SET;
}

Aws::String GetNameForDeploymentLifecycleHookTargetType(DeploymentLifecycleHookTargetType enumValue) {
  switch (enumValue) {
    case DeploymentLifecycleHookTargetType::NOT_SET:
      return {};
    case DeploymentLifecycleHookTargetType::AWS_LAMBDA:
      return "AWS_LAMBDA";
    case DeploymentLifecycleHookTargetType::PAUSE:
      return "PAUSE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeploymentLifecycleHookTargetTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
