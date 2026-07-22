/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/BedrockAgentCoreEndpointProvider.h>
#include <aws/bedrock-agentcore/internal/BedrockAgentCoreEndpointRules.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Endpoint {
BedrockAgentCoreEndpointProvider::BedrockAgentCoreEndpointProvider()
    : BedrockAgentCoreDefaultEpProviderBase(Aws::BedrockAgentCore::BedrockAgentCoreEndpointRules::GetRulesBlob(),
                                            Aws::BedrockAgentCore::BedrockAgentCoreEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace BedrockAgentCore
}  // namespace Aws
