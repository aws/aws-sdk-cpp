/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/BedrockAgentCoreEndpointProvider.h>
#include <aws/bedrock-agentcore/internal/BedrockAgentCoreEndpointRules.h>

namespace Aws {
#ifndef AWS_BEDROCKAGENTCORE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<BedrockAgentCore::Endpoint::BedrockAgentCoreClientConfiguration,
                                                   BedrockAgentCore::Endpoint::BedrockAgentCoreBuiltInParameters,
                                                   BedrockAgentCore::Endpoint::BedrockAgentCoreClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<BedrockAgentCore::Endpoint::BedrockAgentCoreClientConfiguration,
                                                  BedrockAgentCore::Endpoint::BedrockAgentCoreBuiltInParameters,
                                                  BedrockAgentCore::Endpoint::BedrockAgentCoreClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BedrockAgentCore {
namespace Endpoint {
BedrockAgentCoreEndpointProvider::BedrockAgentCoreEndpointProvider()
    : BedrockAgentCoreDefaultEpProviderBase(Aws::BedrockAgentCore::BedrockAgentCoreEndpointRules::GetRulesBlob(),
                                            Aws::BedrockAgentCore::BedrockAgentCoreEndpointRules::RulesBlobSize) {}

void BedrockAgentCoreBuiltInParameters::SetFromClientConfiguration(const BedrockAgentCoreClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BedrockAgentCoreClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BedrockAgentCoreBuiltInParameters::SetFromClientConfiguration(const BedrockAgentCoreClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BedrockAgentCoreClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BedrockAgentCoreBuiltInParameters::SetServiceSpecificParameters(const BedrockAgentCoreClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace BedrockAgentCore
}  // namespace Aws
