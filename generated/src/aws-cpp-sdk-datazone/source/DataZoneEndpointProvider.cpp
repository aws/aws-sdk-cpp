/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/DataZoneEndpointProvider.h>
#include <aws/datazone/internal/DataZoneEndpointRules.h>

namespace Aws {
#ifndef AWS_DATAZONE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DataZone::Endpoint::DataZoneClientConfiguration,
                                                   DataZone::Endpoint::DataZoneBuiltInParameters,
                                                   DataZone::Endpoint::DataZoneClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DataZone::Endpoint::DataZoneClientConfiguration,
                                                  DataZone::Endpoint::DataZoneBuiltInParameters,
                                                  DataZone::Endpoint::DataZoneClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DataZone {
namespace Endpoint {
DataZoneEndpointProvider::DataZoneEndpointProvider()
    : DataZoneDefaultEpProviderBase(Aws::DataZone::DataZoneEndpointRules::GetRulesBlob(),
                                    Aws::DataZone::DataZoneEndpointRules::RulesBlobSize) {}

void DataZoneBuiltInParameters::SetFromClientConfiguration(const DataZoneClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DataZoneClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DataZoneBuiltInParameters::SetFromClientConfiguration(const DataZoneClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DataZoneClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DataZoneBuiltInParameters::SetServiceSpecificParameters(const DataZoneClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace DataZone
}  // namespace Aws
