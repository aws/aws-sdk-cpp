/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/gamelift/model/PlayerGatewayMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {
namespace PlayerGatewayModeMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int REQUIRED_HASH = HashingUtils::HashString("REQUIRED");

PlayerGatewayMode GetPlayerGatewayModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return PlayerGatewayMode::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return PlayerGatewayMode::ENABLED;
  } else if (hashCode == REQUIRED_HASH) {
    return PlayerGatewayMode::REQUIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PlayerGatewayMode>(hashCode);
  }

  return PlayerGatewayMode::NOT_SET;
}

Aws::String GetNameForPlayerGatewayMode(PlayerGatewayMode enumValue) {
  switch (enumValue) {
    case PlayerGatewayMode::NOT_SET:
      return {};
    case PlayerGatewayMode::DISABLED:
      return "DISABLED";
    case PlayerGatewayMode::ENABLED:
      return "ENABLED";
    case PlayerGatewayMode::REQUIRED:
      return "REQUIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PlayerGatewayModeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
