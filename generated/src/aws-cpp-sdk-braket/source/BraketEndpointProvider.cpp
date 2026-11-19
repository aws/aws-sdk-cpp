/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/BraketEndpointProvider.h>
#include <aws/braket/internal/BraketEndpointRules.h>

namespace Aws {
#ifndef AWS_BRAKET_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Braket::Endpoint::BraketClientConfiguration, Braket::Endpoint::BraketBuiltInParameters,
                                                   Braket::Endpoint::BraketClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Braket::Endpoint::BraketClientConfiguration, Braket::Endpoint::BraketBuiltInParameters,
                                                  Braket::Endpoint::BraketClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Braket {
namespace Endpoint {
BraketEndpointProvider::BraketEndpointProvider()
    : BraketDefaultEpProviderBase(Aws::Braket::BraketEndpointRules::GetRulesBlob(), Aws::Braket::BraketEndpointRules::RulesBlobSize) {}

void BraketBuiltInParameters::SetFromClientConfiguration(const BraketClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BraketClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BraketBuiltInParameters::SetFromClientConfiguration(const BraketClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BraketClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BraketBuiltInParameters::SetServiceSpecificParameters(const BraketClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Braket
}  // namespace Aws
