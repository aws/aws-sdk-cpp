/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/FreeTierEndpointProvider.h>
#include <aws/freetier/internal/FreeTierEndpointRules.h>

namespace Aws {
#ifndef AWS_FREETIER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<FreeTier::Endpoint::FreeTierClientConfiguration,
                                                   FreeTier::Endpoint::FreeTierBuiltInParameters,
                                                   FreeTier::Endpoint::FreeTierClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<FreeTier::Endpoint::FreeTierClientConfiguration,
                                                  FreeTier::Endpoint::FreeTierBuiltInParameters,
                                                  FreeTier::Endpoint::FreeTierClientContextParameters>;
}  // namespace Endpoint
#endif

namespace FreeTier {
namespace Endpoint {
FreeTierEndpointProvider::FreeTierEndpointProvider()
    : FreeTierDefaultEpProviderBase(Aws::FreeTier::FreeTierEndpointRules::GetRulesBlob(),
                                    Aws::FreeTier::FreeTierEndpointRules::RulesBlobSize) {}

void FreeTierBuiltInParameters::SetFromClientConfiguration(const FreeTierClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const FreeTierClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void FreeTierBuiltInParameters::SetFromClientConfiguration(const FreeTierClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const FreeTierClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void FreeTierBuiltInParameters::SetServiceSpecificParameters(const FreeTierClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace FreeTier
}  // namespace Aws
