/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/AppConfigEndpointProvider.h>
#include <aws/appconfig/internal/AppConfigEndpointRules.h>

namespace Aws {
#ifndef AWS_APPCONFIG_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AppConfig::Endpoint::AppConfigClientConfiguration,
                                                   AppConfig::Endpoint::AppConfigBuiltInParameters,
                                                   AppConfig::Endpoint::AppConfigClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AppConfig::Endpoint::AppConfigClientConfiguration,
                                                  AppConfig::Endpoint::AppConfigBuiltInParameters,
                                                  AppConfig::Endpoint::AppConfigClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AppConfig {
namespace Endpoint {
AppConfigEndpointProvider::AppConfigEndpointProvider()
    : AppConfigDefaultEpProviderBase(Aws::AppConfig::AppConfigEndpointRules::GetRulesBlob(),
                                     Aws::AppConfig::AppConfigEndpointRules::RulesBlobSize) {}

void AppConfigBuiltInParameters::SetFromClientConfiguration(const AppConfigClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AppConfigClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AppConfigBuiltInParameters::SetFromClientConfiguration(const AppConfigClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AppConfigClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AppConfigBuiltInParameters::SetServiceSpecificParameters(const AppConfigClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AppConfig
}  // namespace Aws
