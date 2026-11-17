/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class AgentInsightCustomerMetadataStatus { NOT_SET, AVAILABLE, CUSTOMER_KEY_UNAVAILABLE, UNAVAILABLE };

namespace AgentInsightCustomerMetadataStatusMapper {
AWS_BEDROCKAGENTCORE_API AgentInsightCustomerMetadataStatus GetAgentInsightCustomerMetadataStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForAgentInsightCustomerMetadataStatus(AgentInsightCustomerMetadataStatus value);
}  // namespace AgentInsightCustomerMetadataStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
