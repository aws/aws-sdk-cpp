/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/BedrockAgentEndpointProvider.h>

namespace Aws {
#ifndef AWS_BEDROCKAGENT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<BedrockAgent::Endpoint::BedrockAgentClientConfiguration,
                                                   BedrockAgent::Endpoint::BedrockAgentBuiltInParameters,
                                                   BedrockAgent::Endpoint::BedrockAgentClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<BedrockAgent::Endpoint::BedrockAgentClientConfiguration,
                                                      BedrockAgent::Endpoint::BedrockAgentBuiltInParameters,
                                                      BedrockAgent::Endpoint::BedrockAgentClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BedrockAgent {
namespace Endpoint {
void BedrockAgentBuiltInParameters::SetFromClientConfiguration(const BedrockAgentClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BedrockAgentClientConfiguration::BaseClientConfigClass&>(config));
}

}  // namespace Endpoint
}  // namespace BedrockAgent
}  // namespace Aws
