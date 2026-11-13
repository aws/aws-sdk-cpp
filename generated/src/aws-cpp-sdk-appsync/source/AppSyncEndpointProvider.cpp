/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/AppSyncEndpointProvider.h>
#include <aws/appsync/internal/AppSyncEndpointRules.h>

namespace Aws {
#ifndef AWS_APPSYNC_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AppSync::Endpoint::AppSyncClientConfiguration,
                                                   AppSync::Endpoint::AppSyncBuiltInParameters,
                                                   AppSync::Endpoint::AppSyncClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AppSync::Endpoint::AppSyncClientConfiguration,
                                                  AppSync::Endpoint::AppSyncBuiltInParameters,
                                                  AppSync::Endpoint::AppSyncClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AppSync {
namespace Endpoint {
AppSyncEndpointProvider::AppSyncEndpointProvider()
    : AppSyncDefaultEpProviderBase(Aws::AppSync::AppSyncEndpointRules::GetRulesBlob(), Aws::AppSync::AppSyncEndpointRules::RulesBlobSize) {}

void AppSyncBuiltInParameters::SetFromClientConfiguration(const AppSyncClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AppSyncClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AppSyncBuiltInParameters::SetFromClientConfiguration(const AppSyncClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AppSyncClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AppSyncBuiltInParameters::SetServiceSpecificParameters(const AppSyncClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AppSync
}  // namespace Aws
