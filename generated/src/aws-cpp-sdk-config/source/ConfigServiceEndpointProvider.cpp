/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/ConfigServiceEndpointProvider.h>
#include <aws/config/internal/ConfigServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_CONFIGSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ConfigService::Endpoint::ConfigServiceClientConfiguration,
                                                   ConfigService::Endpoint::ConfigServiceBuiltInParameters,
                                                   ConfigService::Endpoint::ConfigServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ConfigService::Endpoint::ConfigServiceClientConfiguration,
                                                  ConfigService::Endpoint::ConfigServiceBuiltInParameters,
                                                  ConfigService::Endpoint::ConfigServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ConfigService {
namespace Endpoint {
ConfigServiceEndpointProvider::ConfigServiceEndpointProvider()
    : ConfigServiceDefaultEpProviderBase(Aws::ConfigService::ConfigServiceEndpointRules::GetRulesBlob(),
                                         Aws::ConfigService::ConfigServiceEndpointRules::RulesBlobSize) {}

void ConfigServiceBuiltInParameters::SetFromClientConfiguration(const ConfigServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ConfigServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ConfigServiceBuiltInParameters::SetFromClientConfiguration(const ConfigServiceClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ConfigServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ConfigServiceBuiltInParameters::SetServiceSpecificParameters(const ConfigServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ConfigService
}  // namespace Aws
