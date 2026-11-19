/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/BedrockEndpointProvider.h>
#include <aws/bedrock/internal/BedrockEndpointRules.h>

namespace Aws {
#ifndef AWS_BEDROCK_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Bedrock::Endpoint::BedrockClientConfiguration,
                                                   Bedrock::Endpoint::BedrockBuiltInParameters,
                                                   Bedrock::Endpoint::BedrockClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Bedrock::Endpoint::BedrockClientConfiguration,
                                                  Bedrock::Endpoint::BedrockBuiltInParameters,
                                                  Bedrock::Endpoint::BedrockClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Bedrock {
namespace Endpoint {
BedrockEndpointProvider::BedrockEndpointProvider()
    : BedrockDefaultEpProviderBase(Aws::Bedrock::BedrockEndpointRules::GetRulesBlob(), Aws::Bedrock::BedrockEndpointRules::RulesBlobSize) {}

void BedrockBuiltInParameters::SetFromClientConfiguration(const BedrockClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BedrockClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BedrockBuiltInParameters::SetFromClientConfiguration(const BedrockClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BedrockClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BedrockBuiltInParameters::SetServiceSpecificParameters(const BedrockClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Bedrock
}  // namespace Aws
