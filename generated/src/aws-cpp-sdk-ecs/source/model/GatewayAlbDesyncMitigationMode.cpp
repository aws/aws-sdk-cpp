/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/GatewayAlbDesyncMitigationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace GatewayAlbDesyncMitigationModeMapper {

static const int monitor_HASH = HashingUtils::HashString("monitor");
static const int defensive_HASH = HashingUtils::HashString("defensive");
static const int strictest_HASH = HashingUtils::HashString("strictest");

GatewayAlbDesyncMitigationMode GetGatewayAlbDesyncMitigationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == monitor_HASH) {
    return GatewayAlbDesyncMitigationMode::monitor;
  } else if (hashCode == defensive_HASH) {
    return GatewayAlbDesyncMitigationMode::defensive;
  } else if (hashCode == strictest_HASH) {
    return GatewayAlbDesyncMitigationMode::strictest;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GatewayAlbDesyncMitigationMode>(hashCode);
  }

  return GatewayAlbDesyncMitigationMode::NOT_SET;
}

Aws::String GetNameForGatewayAlbDesyncMitigationMode(GatewayAlbDesyncMitigationMode enumValue) {
  switch (enumValue) {
    case GatewayAlbDesyncMitigationMode::NOT_SET:
      return {};
    case GatewayAlbDesyncMitigationMode::monitor:
      return "monitor";
    case GatewayAlbDesyncMitigationMode::defensive:
      return "defensive";
    case GatewayAlbDesyncMitigationMode::strictest:
      return "strictest";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GatewayAlbDesyncMitigationModeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
