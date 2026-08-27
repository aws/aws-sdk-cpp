/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CodeDeploy {
namespace Model {
namespace DeploymentModeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int RESTART_HASH = HashingUtils::HashString("RESTART");

DeploymentMode GetDeploymentModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return DeploymentMode::STANDARD;
  } else if (hashCode == RESTART_HASH) {
    return DeploymentMode::RESTART;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeploymentMode>(hashCode);
  }

  return DeploymentMode::NOT_SET;
}

Aws::String GetNameForDeploymentMode(DeploymentMode enumValue) {
  switch (enumValue) {
    case DeploymentMode::NOT_SET:
      return {};
    case DeploymentMode::STANDARD:
      return "STANDARD";
    case DeploymentMode::RESTART:
      return "RESTART";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeploymentModeMapper
}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws
