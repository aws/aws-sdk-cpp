/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GatewayRuleStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace GatewayRuleStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

GatewayRuleStatus GetGatewayRuleStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return GatewayRuleStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return GatewayRuleStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return GatewayRuleStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return GatewayRuleStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GatewayRuleStatus>(hashCode);
  }

  return GatewayRuleStatus::NOT_SET;
}

Aws::String GetNameForGatewayRuleStatus(GatewayRuleStatus enumValue) {
  switch (enumValue) {
    case GatewayRuleStatus::NOT_SET:
      return {};
    case GatewayRuleStatus::CREATING:
      return "CREATING";
    case GatewayRuleStatus::ACTIVE:
      return "ACTIVE";
    case GatewayRuleStatus::UPDATING:
      return "UPDATING";
    case GatewayRuleStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GatewayRuleStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
