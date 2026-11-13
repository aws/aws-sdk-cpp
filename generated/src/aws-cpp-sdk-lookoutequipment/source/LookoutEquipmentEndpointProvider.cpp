/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/LookoutEquipmentEndpointProvider.h>
#include <aws/lookoutequipment/internal/LookoutEquipmentEndpointRules.h>

namespace Aws {
#ifndef AWS_LOOKOUTEQUIPMENT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<LookoutEquipment::Endpoint::LookoutEquipmentClientConfiguration,
                                                   LookoutEquipment::Endpoint::LookoutEquipmentBuiltInParameters,
                                                   LookoutEquipment::Endpoint::LookoutEquipmentClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<LookoutEquipment::Endpoint::LookoutEquipmentClientConfiguration,
                                                  LookoutEquipment::Endpoint::LookoutEquipmentBuiltInParameters,
                                                  LookoutEquipment::Endpoint::LookoutEquipmentClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LookoutEquipment {
namespace Endpoint {
LookoutEquipmentEndpointProvider::LookoutEquipmentEndpointProvider()
    : LookoutEquipmentDefaultEpProviderBase(Aws::LookoutEquipment::LookoutEquipmentEndpointRules::GetRulesBlob(),
                                            Aws::LookoutEquipment::LookoutEquipmentEndpointRules::RulesBlobSize) {}

void LookoutEquipmentBuiltInParameters::SetFromClientConfiguration(const LookoutEquipmentClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LookoutEquipmentClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LookoutEquipmentBuiltInParameters::SetFromClientConfiguration(const LookoutEquipmentClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LookoutEquipmentClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LookoutEquipmentBuiltInParameters::SetServiceSpecificParameters(const LookoutEquipmentClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LookoutEquipment
}  // namespace Aws
