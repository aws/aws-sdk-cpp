/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/ConnectEndpointProvider.h>
#include <aws/connect/internal/ConnectEndpointRules.h>

namespace Aws {
#ifndef AWS_CONNECT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Connect::Endpoint::ConnectClientConfiguration,
                                                   Connect::Endpoint::ConnectBuiltInParameters,
                                                   Connect::Endpoint::ConnectClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Connect::Endpoint::ConnectClientConfiguration,
                                                  Connect::Endpoint::ConnectBuiltInParameters,
                                                  Connect::Endpoint::ConnectClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Connect {
namespace Endpoint {
ConnectEndpointProvider::ConnectEndpointProvider()
    : ConnectDefaultEpProviderBase(Aws::Connect::ConnectEndpointRules::GetRulesBlob(), Aws::Connect::ConnectEndpointRules::RulesBlobSize) {}

void ConnectBuiltInParameters::SetFromClientConfiguration(const ConnectClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ConnectClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ConnectBuiltInParameters::SetFromClientConfiguration(const ConnectClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ConnectClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ConnectBuiltInParameters::SetServiceSpecificParameters(const ConnectClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Connect
}  // namespace Aws
