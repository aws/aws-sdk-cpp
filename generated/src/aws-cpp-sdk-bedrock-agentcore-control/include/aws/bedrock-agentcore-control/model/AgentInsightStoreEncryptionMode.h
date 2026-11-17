/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
enum class AgentInsightStoreEncryptionMode { NOT_SET, AWS_OWNED_KMS_KEY, CUSTOMER_MANAGED_KMS };

namespace AgentInsightStoreEncryptionModeMapper {
AWS_BEDROCKAGENTCORECONTROL_API AgentInsightStoreEncryptionMode GetAgentInsightStoreEncryptionModeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForAgentInsightStoreEncryptionMode(AgentInsightStoreEncryptionMode value);
}  // namespace AgentInsightStoreEncryptionModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
