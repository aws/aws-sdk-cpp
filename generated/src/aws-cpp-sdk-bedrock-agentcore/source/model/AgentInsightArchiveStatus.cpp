/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AgentInsightArchiveStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace AgentInsightArchiveStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");

AgentInsightArchiveStatus GetAgentInsightArchiveStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return AgentInsightArchiveStatus::ACTIVE;
  } else if (hashCode == ARCHIVED_HASH) {
    return AgentInsightArchiveStatus::ARCHIVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentInsightArchiveStatus>(hashCode);
  }

  return AgentInsightArchiveStatus::NOT_SET;
}

Aws::String GetNameForAgentInsightArchiveStatus(AgentInsightArchiveStatus enumValue) {
  switch (enumValue) {
    case AgentInsightArchiveStatus::NOT_SET:
      return {};
    case AgentInsightArchiveStatus::ACTIVE:
      return "ACTIVE";
    case AgentInsightArchiveStatus::ARCHIVED:
      return "ARCHIVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentInsightArchiveStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
