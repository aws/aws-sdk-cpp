/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/ConnectHealthEndpointProvider.h>
#include <aws/connecthealth/internal/ConnectHealthEndpointRules.h>

namespace Aws {
#ifndef AWS_CONNECTHEALTH_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ConnectHealth::Endpoint::ConnectHealthClientConfiguration,
                                                   ConnectHealth::Endpoint::ConnectHealthBuiltInParameters,
                                                   ConnectHealth::Endpoint::ConnectHealthClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ConnectHealth::Endpoint::ConnectHealthClientConfiguration,
                                                  ConnectHealth::Endpoint::ConnectHealthBuiltInParameters,
                                                  ConnectHealth::Endpoint::ConnectHealthClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ConnectHealth {
namespace Endpoint {
ConnectHealthEndpointProvider::ConnectHealthEndpointProvider()
    : ConnectHealthDefaultEpProviderBase(Aws::ConnectHealth::ConnectHealthEndpointRules::GetRulesBlob(),
                                         Aws::ConnectHealth::ConnectHealthEndpointRules::RulesBlobSize) {}

void ConnectHealthBuiltInParameters::SetFromClientConfiguration(const ConnectHealthClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ConnectHealthClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ConnectHealthBuiltInParameters::SetFromClientConfiguration(const ConnectHealthClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ConnectHealthClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ConnectHealthBuiltInParameters::SetServiceSpecificParameters(const ConnectHealthClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace ConnectHealth
}  // namespace Aws
