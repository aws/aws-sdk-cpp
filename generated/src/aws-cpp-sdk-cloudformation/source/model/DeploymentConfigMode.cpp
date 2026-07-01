/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DeploymentConfigMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace DeploymentConfigModeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int EXPRESS_HASH = HashingUtils::HashString("EXPRESS");

DeploymentConfigMode GetDeploymentConfigModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return DeploymentConfigMode::STANDARD;
  } else if (hashCode == EXPRESS_HASH) {
    return DeploymentConfigMode::EXPRESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeploymentConfigMode>(hashCode);
  }

  return DeploymentConfigMode::NOT_SET;
}

Aws::String GetNameForDeploymentConfigMode(DeploymentConfigMode enumValue) {
  switch (enumValue) {
    case DeploymentConfigMode::NOT_SET:
      return {};
    case DeploymentConfigMode::STANDARD:
      return "STANDARD";
    case DeploymentConfigMode::EXPRESS:
      return "EXPRESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeploymentConfigModeMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
