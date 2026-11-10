/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/IVSEndpointProvider.h>
#include <aws/ivs/internal/IVSEndpointRules.h>

namespace Aws {
#ifndef AWS_IVS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IVS::Endpoint::IVSClientConfiguration, IVS::Endpoint::IVSBuiltInParameters,
                                                   IVS::Endpoint::IVSClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IVS::Endpoint::IVSClientConfiguration, IVS::Endpoint::IVSBuiltInParameters,
                                                  IVS::Endpoint::IVSClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IVS {
namespace Endpoint {
IVSEndpointProvider::IVSEndpointProvider()
    : IVSDefaultEpProviderBase(Aws::IVS::IVSEndpointRules::GetRulesBlob(), Aws::IVS::IVSEndpointRules::RulesBlobSize) {}

void IVSBuiltInParameters::SetFromClientConfiguration(const IVSClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IVSClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IVSBuiltInParameters::SetFromClientConfiguration(const IVSClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IVSClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IVSBuiltInParameters::SetServiceSpecificParameters(const IVSClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IVS
}  // namespace Aws
