/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/EFSEndpointProvider.h>
#include <aws/elasticfilesystem/internal/EFSEndpointRules.h>

namespace Aws {
#ifndef AWS_EFS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EFS::Endpoint::EFSClientConfiguration, EFS::Endpoint::EFSBuiltInParameters,
                                                   EFS::Endpoint::EFSClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EFS::Endpoint::EFSClientConfiguration, EFS::Endpoint::EFSBuiltInParameters,
                                                  EFS::Endpoint::EFSClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EFS {
namespace Endpoint {
EFSEndpointProvider::EFSEndpointProvider()
    : EFSDefaultEpProviderBase(Aws::EFS::EFSEndpointRules::GetRulesBlob(), Aws::EFS::EFSEndpointRules::RulesBlobSize) {}

void EFSBuiltInParameters::SetFromClientConfiguration(const EFSClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EFSClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EFSBuiltInParameters::SetFromClientConfiguration(const EFSClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EFSClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EFSBuiltInParameters::SetServiceSpecificParameters(const EFSClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace EFS
}  // namespace Aws
