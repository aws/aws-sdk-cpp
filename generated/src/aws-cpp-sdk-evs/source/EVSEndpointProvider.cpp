/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/EVSEndpointProvider.h>
#include <aws/evs/internal/EVSEndpointRules.h>

namespace Aws {
#ifndef AWS_EVS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EVS::Endpoint::EVSClientConfiguration, EVS::Endpoint::EVSBuiltInParameters,
                                                   EVS::Endpoint::EVSClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EVS::Endpoint::EVSClientConfiguration, EVS::Endpoint::EVSBuiltInParameters,
                                                  EVS::Endpoint::EVSClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EVS {
namespace Endpoint {
EVSEndpointProvider::EVSEndpointProvider()
    : EVSDefaultEpProviderBase(Aws::EVS::EVSEndpointRules::GetRulesBlob(), Aws::EVS::EVSEndpointRules::RulesBlobSize) {}

void EVSBuiltInParameters::SetFromClientConfiguration(const EVSClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EVSClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EVSBuiltInParameters::SetFromClientConfiguration(const EVSClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EVSClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EVSBuiltInParameters::SetServiceSpecificParameters(const EVSClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace EVS
}  // namespace Aws
