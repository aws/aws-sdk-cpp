/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/FISEndpointProvider.h>
#include <aws/fis/internal/FISEndpointRules.h>

namespace Aws {
#ifndef AWS_FIS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<FIS::Endpoint::FISClientConfiguration, FIS::Endpoint::FISBuiltInParameters,
                                                   FIS::Endpoint::FISClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<FIS::Endpoint::FISClientConfiguration, FIS::Endpoint::FISBuiltInParameters,
                                                  FIS::Endpoint::FISClientContextParameters>;
}  // namespace Endpoint
#endif

namespace FIS {
namespace Endpoint {
FISEndpointProvider::FISEndpointProvider()
    : FISDefaultEpProviderBase(Aws::FIS::FISEndpointRules::GetRulesBlob(), Aws::FIS::FISEndpointRules::RulesBlobSize) {}

void FISBuiltInParameters::SetFromClientConfiguration(const FISClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const FISClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void FISBuiltInParameters::SetFromClientConfiguration(const FISClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const FISClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void FISBuiltInParameters::SetServiceSpecificParameters(const FISClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace FIS
}  // namespace Aws
