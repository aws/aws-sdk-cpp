/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlEndpointProvider.h>
#include <aws/bedrock-agentcore-control/internal/BedrockAgentCoreControlEndpointRules.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Endpoint {
BedrockAgentCoreControlEndpointProvider::BedrockAgentCoreControlEndpointProvider()
    : BedrockAgentCoreControlDefaultEpProviderBase(Aws::BedrockAgentCoreControl::BedrockAgentCoreControlEndpointRules::GetRulesBlob(),
                                                   Aws::BedrockAgentCoreControl::BedrockAgentCoreControlEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
