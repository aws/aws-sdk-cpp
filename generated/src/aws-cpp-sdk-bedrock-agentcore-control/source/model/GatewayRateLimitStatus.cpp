/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GatewayRateLimitStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace GatewayRateLimitStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

GatewayRateLimitStatus GetGatewayRateLimitStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return GatewayRateLimitStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return GatewayRateLimitStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return GatewayRateLimitStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return GatewayRateLimitStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GatewayRateLimitStatus>(hashCode);
  }

  return GatewayRateLimitStatus::NOT_SET;
}

Aws::String GetNameForGatewayRateLimitStatus(GatewayRateLimitStatus enumValue) {
  switch (enumValue) {
    case GatewayRateLimitStatus::NOT_SET:
      return {};
    case GatewayRateLimitStatus::CREATING:
      return "CREATING";
    case GatewayRateLimitStatus::ACTIVE:
      return "ACTIVE";
    case GatewayRateLimitStatus::UPDATING:
      return "UPDATING";
    case GatewayRateLimitStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GatewayRateLimitStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
