/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/gamelift/model/PlayerGatewayStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {
namespace PlayerGatewayStatusMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");

PlayerGatewayStatus GetPlayerGatewayStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return PlayerGatewayStatus::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return PlayerGatewayStatus::ENABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PlayerGatewayStatus>(hashCode);
  }

  return PlayerGatewayStatus::NOT_SET;
}

Aws::String GetNameForPlayerGatewayStatus(PlayerGatewayStatus enumValue) {
  switch (enumValue) {
    case PlayerGatewayStatus::NOT_SET:
      return {};
    case PlayerGatewayStatus::DISABLED:
      return "DISABLED";
    case PlayerGatewayStatus::ENABLED:
      return "ENABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PlayerGatewayStatusMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
