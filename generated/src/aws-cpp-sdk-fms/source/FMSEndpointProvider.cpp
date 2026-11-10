/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/FMSEndpointProvider.h>
#include <aws/fms/internal/FMSEndpointRules.h>

namespace Aws {
#ifndef AWS_FMS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<FMS::Endpoint::FMSClientConfiguration, FMS::Endpoint::FMSBuiltInParameters,
                                                   FMS::Endpoint::FMSClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<FMS::Endpoint::FMSClientConfiguration, FMS::Endpoint::FMSBuiltInParameters,
                                                  FMS::Endpoint::FMSClientContextParameters>;
}  // namespace Endpoint
#endif

namespace FMS {
namespace Endpoint {
FMSEndpointProvider::FMSEndpointProvider()
    : FMSDefaultEpProviderBase(Aws::FMS::FMSEndpointRules::GetRulesBlob(), Aws::FMS::FMSEndpointRules::RulesBlobSize) {}

void FMSBuiltInParameters::SetFromClientConfiguration(const FMSClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const FMSClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void FMSBuiltInParameters::SetFromClientConfiguration(const FMSClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const FMSClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void FMSBuiltInParameters::SetServiceSpecificParameters(const FMSClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace FMS
}  // namespace Aws
