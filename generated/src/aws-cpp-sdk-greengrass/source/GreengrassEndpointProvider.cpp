/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/GreengrassEndpointProvider.h>
#include <aws/greengrass/internal/GreengrassEndpointRules.h>

namespace Aws {
#ifndef AWS_GREENGRASS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Greengrass::Endpoint::GreengrassClientConfiguration,
                                                   Greengrass::Endpoint::GreengrassBuiltInParameters,
                                                   Greengrass::Endpoint::GreengrassClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Greengrass::Endpoint::GreengrassClientConfiguration,
                                                  Greengrass::Endpoint::GreengrassBuiltInParameters,
                                                  Greengrass::Endpoint::GreengrassClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Greengrass {
namespace Endpoint {
GreengrassEndpointProvider::GreengrassEndpointProvider()
    : GreengrassDefaultEpProviderBase(Aws::Greengrass::GreengrassEndpointRules::GetRulesBlob(),
                                      Aws::Greengrass::GreengrassEndpointRules::RulesBlobSize) {}

void GreengrassBuiltInParameters::SetFromClientConfiguration(const GreengrassClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const GreengrassClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void GreengrassBuiltInParameters::SetFromClientConfiguration(const GreengrassClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const GreengrassClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void GreengrassBuiltInParameters::SetServiceSpecificParameters(const GreengrassClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Greengrass
}  // namespace Aws
