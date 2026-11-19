/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/Cloud9EndpointProvider.h>
#include <aws/cloud9/internal/Cloud9EndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUD9_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Cloud9::Endpoint::Cloud9ClientConfiguration, Cloud9::Endpoint::Cloud9BuiltInParameters,
                                                   Cloud9::Endpoint::Cloud9ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Cloud9::Endpoint::Cloud9ClientConfiguration, Cloud9::Endpoint::Cloud9BuiltInParameters,
                                                  Cloud9::Endpoint::Cloud9ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Cloud9 {
namespace Endpoint {
Cloud9EndpointProvider::Cloud9EndpointProvider()
    : Cloud9DefaultEpProviderBase(Aws::Cloud9::Cloud9EndpointRules::GetRulesBlob(), Aws::Cloud9::Cloud9EndpointRules::RulesBlobSize) {}

void Cloud9BuiltInParameters::SetFromClientConfiguration(const Cloud9ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const Cloud9ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void Cloud9BuiltInParameters::SetFromClientConfiguration(const Cloud9ClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const Cloud9ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void Cloud9BuiltInParameters::SetServiceSpecificParameters(const Cloud9ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Cloud9
}  // namespace Aws
