/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/DirectoryServiceEndpointProvider.h>
#include <aws/ds/internal/DirectoryServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_DIRECTORYSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DirectoryService::Endpoint::DirectoryServiceClientConfiguration,
                                                   DirectoryService::Endpoint::DirectoryServiceBuiltInParameters,
                                                   DirectoryService::Endpoint::DirectoryServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DirectoryService::Endpoint::DirectoryServiceClientConfiguration,
                                                  DirectoryService::Endpoint::DirectoryServiceBuiltInParameters,
                                                  DirectoryService::Endpoint::DirectoryServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DirectoryService {
namespace Endpoint {
DirectoryServiceEndpointProvider::DirectoryServiceEndpointProvider()
    : DirectoryServiceDefaultEpProviderBase(Aws::DirectoryService::DirectoryServiceEndpointRules::GetRulesBlob(),
                                            Aws::DirectoryService::DirectoryServiceEndpointRules::RulesBlobSize) {}

void DirectoryServiceBuiltInParameters::SetFromClientConfiguration(const DirectoryServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DirectoryServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DirectoryServiceBuiltInParameters::SetFromClientConfiguration(const DirectoryServiceClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DirectoryServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DirectoryServiceBuiltInParameters::SetServiceSpecificParameters(const DirectoryServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace DirectoryService
}  // namespace Aws
