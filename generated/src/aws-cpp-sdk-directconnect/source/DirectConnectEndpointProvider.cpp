/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/DirectConnectEndpointProvider.h>
#include <aws/directconnect/internal/DirectConnectEndpointRules.h>

namespace Aws {
#ifndef AWS_DIRECTCONNECT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DirectConnect::Endpoint::DirectConnectClientConfiguration,
                                                   DirectConnect::Endpoint::DirectConnectBuiltInParameters,
                                                   DirectConnect::Endpoint::DirectConnectClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DirectConnect::Endpoint::DirectConnectClientConfiguration,
                                                  DirectConnect::Endpoint::DirectConnectBuiltInParameters,
                                                  DirectConnect::Endpoint::DirectConnectClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DirectConnect {
namespace Endpoint {
DirectConnectEndpointProvider::DirectConnectEndpointProvider()
    : DirectConnectDefaultEpProviderBase(Aws::DirectConnect::DirectConnectEndpointRules::GetRulesBlob(),
                                         Aws::DirectConnect::DirectConnectEndpointRules::RulesBlobSize) {}

void DirectConnectBuiltInParameters::SetFromClientConfiguration(const DirectConnectClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DirectConnectClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DirectConnectBuiltInParameters::SetFromClientConfiguration(const DirectConnectClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DirectConnectClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DirectConnectBuiltInParameters::SetServiceSpecificParameters(const DirectConnectClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace DirectConnect
}  // namespace Aws
