/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/BedrockEndpointProvider.h>

namespace Aws {
#ifndef AWS_BEDROCK_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Bedrock::Endpoint::BedrockClientConfiguration,
                                                   Bedrock::Endpoint::BedrockBuiltInParameters,
                                                   Bedrock::Endpoint::BedrockClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<Bedrock::Endpoint::BedrockClientConfiguration,
                                                      Bedrock::Endpoint::BedrockBuiltInParameters,
                                                      Bedrock::Endpoint::BedrockClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Bedrock {
namespace Endpoint {
void BedrockBuiltInParameters::SetFromClientConfiguration(const BedrockClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BedrockClientConfiguration::BaseClientConfigClass&>(config));
}

}  // namespace Endpoint
}  // namespace Bedrock
}  // namespace Aws
