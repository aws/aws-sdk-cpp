/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DeploymentMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace DeploymentModeMapper {

static const int REVERT_DRIFT_HASH = HashingUtils::HashString("REVERT_DRIFT");

DeploymentMode GetDeploymentModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REVERT_DRIFT_HASH) {
    return DeploymentMode::REVERT_DRIFT;
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
    case DeploymentMode::REVERT_DRIFT:
      return "REVERT_DRIFT";
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
}  // namespace CloudFormation
}  // namespace Aws
