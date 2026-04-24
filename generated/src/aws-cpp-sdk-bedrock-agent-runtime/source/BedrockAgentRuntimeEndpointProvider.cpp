/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeEndpointProvider.h>

namespace Aws {
#ifndef AWS_BEDROCKAGENTRUNTIME_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeClientConfiguration,
                                                   BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeBuiltInParameters,
                                                   BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeClientConfiguration,
                                                      BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeBuiltInParameters,
                                                      BedrockAgentRuntime::Endpoint::BedrockAgentRuntimeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BedrockAgentRuntime {
namespace Endpoint {
void BedrockAgentRuntimeBuiltInParameters::SetFromClientConfiguration(const BedrockAgentRuntimeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BedrockAgentRuntimeClientConfiguration::BaseClientConfigClass&>(config));
}

}  // namespace Endpoint
}  // namespace BedrockAgentRuntime
}  // namespace Aws
