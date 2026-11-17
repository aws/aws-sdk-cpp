/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AgentInsightStoreStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace AgentInsightStoreStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");

AgentInsightStoreStatus GetAgentInsightStoreStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return AgentInsightStoreStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return AgentInsightStoreStatus::UPDATING;
  } else if (hashCode == INACTIVE_HASH) {
    return AgentInsightStoreStatus::INACTIVE;
  } else if (hashCode == ERROR__HASH) {
    return AgentInsightStoreStatus::ERROR_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentInsightStoreStatus>(hashCode);
  }

  return AgentInsightStoreStatus::NOT_SET;
}

Aws::String GetNameForAgentInsightStoreStatus(AgentInsightStoreStatus enumValue) {
  switch (enumValue) {
    case AgentInsightStoreStatus::NOT_SET:
      return {};
    case AgentInsightStoreStatus::ACTIVE:
      return "ACTIVE";
    case AgentInsightStoreStatus::UPDATING:
      return "UPDATING";
    case AgentInsightStoreStatus::INACTIVE:
      return "INACTIVE";
    case AgentInsightStoreStatus::ERROR_:
      return "ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentInsightStoreStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
