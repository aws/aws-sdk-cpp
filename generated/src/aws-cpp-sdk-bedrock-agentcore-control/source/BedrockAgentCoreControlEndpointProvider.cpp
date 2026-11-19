/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlEndpointProvider.h>
#include <aws/bedrock-agentcore-control/internal/BedrockAgentCoreControlEndpointRules.h>

namespace Aws {
#ifndef AWS_BEDROCKAGENTCORECONTROL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlClientConfiguration,
                                                   BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlBuiltInParameters,
                                                   BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlClientConfiguration,
                                                  BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlBuiltInParameters,
                                                  BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BedrockAgentCoreControl {
namespace Endpoint {
BedrockAgentCoreControlEndpointProvider::BedrockAgentCoreControlEndpointProvider()
    : BedrockAgentCoreControlDefaultEpProviderBase(Aws::BedrockAgentCoreControl::BedrockAgentCoreControlEndpointRules::GetRulesBlob(),
                                                   Aws::BedrockAgentCoreControl::BedrockAgentCoreControlEndpointRules::RulesBlobSize) {}

void BedrockAgentCoreControlBuiltInParameters::SetFromClientConfiguration(const BedrockAgentCoreControlClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BedrockAgentCoreControlClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BedrockAgentCoreControlBuiltInParameters::SetFromClientConfiguration(const BedrockAgentCoreControlClientConfiguration& config,
                                                                          const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BedrockAgentCoreControlClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BedrockAgentCoreControlBuiltInParameters::SetServiceSpecificParameters(const BedrockAgentCoreControlClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
