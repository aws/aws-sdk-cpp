/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/CloudDirectoryEndpointProvider.h>
#include <aws/clouddirectory/internal/CloudDirectoryEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDDIRECTORY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudDirectory::Endpoint::CloudDirectoryClientConfiguration,
                                                   CloudDirectory::Endpoint::CloudDirectoryBuiltInParameters,
                                                   CloudDirectory::Endpoint::CloudDirectoryClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudDirectory::Endpoint::CloudDirectoryClientConfiguration,
                                                  CloudDirectory::Endpoint::CloudDirectoryBuiltInParameters,
                                                  CloudDirectory::Endpoint::CloudDirectoryClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudDirectory {
namespace Endpoint {
CloudDirectoryEndpointProvider::CloudDirectoryEndpointProvider()
    : CloudDirectoryDefaultEpProviderBase(Aws::CloudDirectory::CloudDirectoryEndpointRules::GetRulesBlob(),
                                          Aws::CloudDirectory::CloudDirectoryEndpointRules::RulesBlobSize) {}

void CloudDirectoryBuiltInParameters::SetFromClientConfiguration(const CloudDirectoryClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudDirectoryClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudDirectoryBuiltInParameters::SetFromClientConfiguration(const CloudDirectoryClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudDirectoryClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudDirectoryBuiltInParameters::SetServiceSpecificParameters(const CloudDirectoryClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudDirectory
}  // namespace Aws
