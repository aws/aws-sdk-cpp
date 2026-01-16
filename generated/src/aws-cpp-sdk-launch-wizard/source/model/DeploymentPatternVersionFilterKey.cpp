/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/launch-wizard/model/DeploymentPatternVersionFilterKey.h>

using namespace Aws::Utils;

namespace Aws {
namespace LaunchWizard {
namespace Model {
namespace DeploymentPatternVersionFilterKeyMapper {

static const int updateFromVersion_HASH = HashingUtils::HashString("updateFromVersion");

DeploymentPatternVersionFilterKey GetDeploymentPatternVersionFilterKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == updateFromVersion_HASH) {
    return DeploymentPatternVersionFilterKey::updateFromVersion;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeploymentPatternVersionFilterKey>(hashCode);
  }

  return DeploymentPatternVersionFilterKey::NOT_SET;
}

Aws::String GetNameForDeploymentPatternVersionFilterKey(DeploymentPatternVersionFilterKey enumValue) {
  switch (enumValue) {
    case DeploymentPatternVersionFilterKey::NOT_SET:
      return {};
    case DeploymentPatternVersionFilterKey::updateFromVersion:
      return "updateFromVersion";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeploymentPatternVersionFilterKeyMapper
}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
