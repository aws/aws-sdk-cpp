/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/DirectoryServiceDataEndpointProvider.h>
#include <aws/directory-service-data/internal/DirectoryServiceDataEndpointRules.h>

namespace Aws {
#ifndef AWS_DIRECTORYSERVICEDATA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DirectoryServiceData::Endpoint::DirectoryServiceDataClientConfiguration,
                                                   DirectoryServiceData::Endpoint::DirectoryServiceDataBuiltInParameters,
                                                   DirectoryServiceData::Endpoint::DirectoryServiceDataClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DirectoryServiceData::Endpoint::DirectoryServiceDataClientConfiguration,
                                                  DirectoryServiceData::Endpoint::DirectoryServiceDataBuiltInParameters,
                                                  DirectoryServiceData::Endpoint::DirectoryServiceDataClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DirectoryServiceData {
namespace Endpoint {
DirectoryServiceDataEndpointProvider::DirectoryServiceDataEndpointProvider()
    : DirectoryServiceDataDefaultEpProviderBase(Aws::DirectoryServiceData::DirectoryServiceDataEndpointRules::GetRulesBlob(),
                                                Aws::DirectoryServiceData::DirectoryServiceDataEndpointRules::RulesBlobSize) {}

void DirectoryServiceDataBuiltInParameters::SetFromClientConfiguration(const DirectoryServiceDataClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DirectoryServiceDataClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DirectoryServiceDataBuiltInParameters::SetFromClientConfiguration(const DirectoryServiceDataClientConfiguration& config,
                                                                       const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DirectoryServiceDataClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DirectoryServiceDataBuiltInParameters::SetServiceSpecificParameters(const DirectoryServiceDataClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace DirectoryServiceData
}  // namespace Aws
