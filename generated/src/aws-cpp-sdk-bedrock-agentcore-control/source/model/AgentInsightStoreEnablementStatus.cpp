/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AgentInsightStoreEnablementStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace AgentInsightStoreEnablementStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

AgentInsightStoreEnablementStatus GetAgentInsightStoreEnablementStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return AgentInsightStoreEnablementStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return AgentInsightStoreEnablementStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentInsightStoreEnablementStatus>(hashCode);
  }

  return AgentInsightStoreEnablementStatus::NOT_SET;
}

Aws::String GetNameForAgentInsightStoreEnablementStatus(AgentInsightStoreEnablementStatus enumValue) {
  switch (enumValue) {
    case AgentInsightStoreEnablementStatus::NOT_SET:
      return {};
    case AgentInsightStoreEnablementStatus::ENABLED:
      return "ENABLED";
    case AgentInsightStoreEnablementStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentInsightStoreEnablementStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
