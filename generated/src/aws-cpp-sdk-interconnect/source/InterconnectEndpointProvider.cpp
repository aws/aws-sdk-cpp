/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/interconnect/InterconnectEndpointProvider.h>
#include <aws/interconnect/internal/InterconnectEndpointRules.h>

namespace Aws {
#ifndef AWS_INTERCONNECT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Interconnect::Endpoint::InterconnectClientConfiguration,
                                                   Interconnect::Endpoint::InterconnectBuiltInParameters,
                                                   Interconnect::Endpoint::InterconnectClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Interconnect::Endpoint::InterconnectClientConfiguration,
                                                  Interconnect::Endpoint::InterconnectBuiltInParameters,
                                                  Interconnect::Endpoint::InterconnectClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Interconnect {
namespace Endpoint {
InterconnectEndpointProvider::InterconnectEndpointProvider()
    : InterconnectDefaultEpProviderBase(Aws::Interconnect::InterconnectEndpointRules::GetRulesBlob(),
                                        Aws::Interconnect::InterconnectEndpointRules::RulesBlobSize) {}

void InterconnectBuiltInParameters::SetFromClientConfiguration(const InterconnectClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const InterconnectClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void InterconnectBuiltInParameters::SetFromClientConfiguration(const InterconnectClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const InterconnectClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void InterconnectBuiltInParameters::SetServiceSpecificParameters(const InterconnectClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace Interconnect
}  // namespace Aws
