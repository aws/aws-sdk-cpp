/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/ControlTowerEndpointProvider.h>
#include <aws/controltower/internal/ControlTowerEndpointRules.h>

namespace Aws {
#ifndef AWS_CONTROLTOWER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ControlTower::Endpoint::ControlTowerClientConfiguration,
                                                   ControlTower::Endpoint::ControlTowerBuiltInParameters,
                                                   ControlTower::Endpoint::ControlTowerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ControlTower::Endpoint::ControlTowerClientConfiguration,
                                                  ControlTower::Endpoint::ControlTowerBuiltInParameters,
                                                  ControlTower::Endpoint::ControlTowerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ControlTower {
namespace Endpoint {
ControlTowerEndpointProvider::ControlTowerEndpointProvider()
    : ControlTowerDefaultEpProviderBase(Aws::ControlTower::ControlTowerEndpointRules::GetRulesBlob(),
                                        Aws::ControlTower::ControlTowerEndpointRules::RulesBlobSize) {}

void ControlTowerBuiltInParameters::SetFromClientConfiguration(const ControlTowerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ControlTowerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ControlTowerBuiltInParameters::SetFromClientConfiguration(const ControlTowerClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ControlTowerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ControlTowerBuiltInParameters::SetServiceSpecificParameters(const ControlTowerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ControlTower
}  // namespace Aws
