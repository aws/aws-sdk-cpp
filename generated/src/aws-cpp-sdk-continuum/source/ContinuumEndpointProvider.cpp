/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/ContinuumEndpointProvider.h>
#include <aws/continuum/internal/ContinuumEndpointRules.h>

namespace Aws {
#ifndef AWS_CONTINUUM_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Continuum::Endpoint::ContinuumClientConfiguration,
                                                   Continuum::Endpoint::ContinuumBuiltInParameters,
                                                   Continuum::Endpoint::ContinuumClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Continuum::Endpoint::ContinuumClientConfiguration,
                                                  Continuum::Endpoint::ContinuumBuiltInParameters,
                                                  Continuum::Endpoint::ContinuumClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Continuum {
namespace Endpoint {
ContinuumEndpointProvider::ContinuumEndpointProvider()
    : ContinuumDefaultEpProviderBase(Aws::Continuum::ContinuumEndpointRules::GetRulesBlob(),
                                     Aws::Continuum::ContinuumEndpointRules::RulesBlobSize) {}

void ContinuumBuiltInParameters::SetFromClientConfiguration(const ContinuumClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ContinuumClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ContinuumBuiltInParameters::SetFromClientConfiguration(const ContinuumClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ContinuumClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ContinuumBuiltInParameters::SetServiceSpecificParameters(const ContinuumClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace Continuum
}  // namespace Aws
