/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AgentInsightCustomerMetadataStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace AgentInsightCustomerMetadataStatusMapper {

static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int CUSTOMER_KEY_UNAVAILABLE_HASH = HashingUtils::HashString("CUSTOMER_KEY_UNAVAILABLE");
static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");

AgentInsightCustomerMetadataStatus GetAgentInsightCustomerMetadataStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVAILABLE_HASH) {
    return AgentInsightCustomerMetadataStatus::AVAILABLE;
  } else if (hashCode == CUSTOMER_KEY_UNAVAILABLE_HASH) {
    return AgentInsightCustomerMetadataStatus::CUSTOMER_KEY_UNAVAILABLE;
  } else if (hashCode == UNAVAILABLE_HASH) {
    return AgentInsightCustomerMetadataStatus::UNAVAILABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentInsightCustomerMetadataStatus>(hashCode);
  }

  return AgentInsightCustomerMetadataStatus::NOT_SET;
}

Aws::String GetNameForAgentInsightCustomerMetadataStatus(AgentInsightCustomerMetadataStatus enumValue) {
  switch (enumValue) {
    case AgentInsightCustomerMetadataStatus::NOT_SET:
      return {};
    case AgentInsightCustomerMetadataStatus::AVAILABLE:
      return "AVAILABLE";
    case AgentInsightCustomerMetadataStatus::CUSTOMER_KEY_UNAVAILABLE:
      return "CUSTOMER_KEY_UNAVAILABLE";
    case AgentInsightCustomerMetadataStatus::UNAVAILABLE:
      return "UNAVAILABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentInsightCustomerMetadataStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
