/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/es/model/DeploymentStrategyOverride.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElasticsearchService {
namespace Model {
namespace DeploymentStrategyOverrideMapper {

static const int ClonedBlueGreen_HASH = HashingUtils::HashString("ClonedBlueGreen");

DeploymentStrategyOverride GetDeploymentStrategyOverrideForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ClonedBlueGreen_HASH) {
    return DeploymentStrategyOverride::ClonedBlueGreen;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeploymentStrategyOverride>(hashCode);
  }

  return DeploymentStrategyOverride::NOT_SET;
}

Aws::String GetNameForDeploymentStrategyOverride(DeploymentStrategyOverride enumValue) {
  switch (enumValue) {
    case DeploymentStrategyOverride::NOT_SET:
      return {};
    case DeploymentStrategyOverride::ClonedBlueGreen:
      return "ClonedBlueGreen";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeploymentStrategyOverrideMapper
}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
