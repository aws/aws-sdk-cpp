/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfigdata/AppConfigDataEndpointProvider.h>
#include <aws/appconfigdata/internal/AppConfigDataEndpointRules.h>

namespace Aws {
#ifndef AWS_APPCONFIGDATA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AppConfigData::Endpoint::AppConfigDataClientConfiguration,
                                                   AppConfigData::Endpoint::AppConfigDataBuiltInParameters,
                                                   AppConfigData::Endpoint::AppConfigDataClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AppConfigData::Endpoint::AppConfigDataClientConfiguration,
                                                  AppConfigData::Endpoint::AppConfigDataBuiltInParameters,
                                                  AppConfigData::Endpoint::AppConfigDataClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AppConfigData {
namespace Endpoint {
AppConfigDataEndpointProvider::AppConfigDataEndpointProvider()
    : AppConfigDataDefaultEpProviderBase(Aws::AppConfigData::AppConfigDataEndpointRules::GetRulesBlob(),
                                         Aws::AppConfigData::AppConfigDataEndpointRules::RulesBlobSize) {}

void AppConfigDataBuiltInParameters::SetFromClientConfiguration(const AppConfigDataClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AppConfigDataClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AppConfigDataBuiltInParameters::SetFromClientConfiguration(const AppConfigDataClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AppConfigDataClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AppConfigDataBuiltInParameters::SetServiceSpecificParameters(const AppConfigDataClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AppConfigData
}  // namespace Aws
