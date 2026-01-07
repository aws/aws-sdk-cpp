/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/BedrockRuntimeEndpointProvider.h>

namespace Aws {
#ifndef AWS_BEDROCKRUNTIME_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<BedrockRuntime::Endpoint::BedrockRuntimeClientConfiguration,
                                                   BedrockRuntime::Endpoint::BedrockRuntimeBuiltInParameters,
                                                   BedrockRuntime::Endpoint::BedrockRuntimeClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<BedrockRuntime::Endpoint::BedrockRuntimeClientConfiguration,
                                                      BedrockRuntime::Endpoint::BedrockRuntimeBuiltInParameters,
                                                      BedrockRuntime::Endpoint::BedrockRuntimeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BedrockRuntime {
namespace Endpoint {
void BedrockRuntimeBuiltInParameters::SetFromClientConfiguration(const BedrockRuntimeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BedrockRuntimeClientConfiguration::BaseClientConfigClass&>(config));
}

}  // namespace Endpoint
}  // namespace BedrockRuntime
}  // namespace Aws
