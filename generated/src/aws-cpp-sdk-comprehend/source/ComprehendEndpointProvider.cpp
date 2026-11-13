/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/ComprehendEndpointProvider.h>
#include <aws/comprehend/internal/ComprehendEndpointRules.h>

namespace Aws {
#ifndef AWS_COMPREHEND_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Comprehend::Endpoint::ComprehendClientConfiguration,
                                                   Comprehend::Endpoint::ComprehendBuiltInParameters,
                                                   Comprehend::Endpoint::ComprehendClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Comprehend::Endpoint::ComprehendClientConfiguration,
                                                  Comprehend::Endpoint::ComprehendBuiltInParameters,
                                                  Comprehend::Endpoint::ComprehendClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Comprehend {
namespace Endpoint {
ComprehendEndpointProvider::ComprehendEndpointProvider()
    : ComprehendDefaultEpProviderBase(Aws::Comprehend::ComprehendEndpointRules::GetRulesBlob(),
                                      Aws::Comprehend::ComprehendEndpointRules::RulesBlobSize) {}

void ComprehendBuiltInParameters::SetFromClientConfiguration(const ComprehendClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ComprehendClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ComprehendBuiltInParameters::SetFromClientConfiguration(const ComprehendClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ComprehendClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ComprehendBuiltInParameters::SetServiceSpecificParameters(const ComprehendClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Comprehend
}  // namespace Aws
