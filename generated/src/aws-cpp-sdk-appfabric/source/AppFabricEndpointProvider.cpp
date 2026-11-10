/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/AppFabricEndpointProvider.h>
#include <aws/appfabric/internal/AppFabricEndpointRules.h>

namespace Aws {
#ifndef AWS_APPFABRIC_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AppFabric::Endpoint::AppFabricClientConfiguration,
                                                   AppFabric::Endpoint::AppFabricBuiltInParameters,
                                                   AppFabric::Endpoint::AppFabricClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AppFabric::Endpoint::AppFabricClientConfiguration,
                                                  AppFabric::Endpoint::AppFabricBuiltInParameters,
                                                  AppFabric::Endpoint::AppFabricClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AppFabric {
namespace Endpoint {
AppFabricEndpointProvider::AppFabricEndpointProvider()
    : AppFabricDefaultEpProviderBase(Aws::AppFabric::AppFabricEndpointRules::GetRulesBlob(),
                                     Aws::AppFabric::AppFabricEndpointRules::RulesBlobSize) {}

void AppFabricBuiltInParameters::SetFromClientConfiguration(const AppFabricClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AppFabricClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AppFabricBuiltInParameters::SetFromClientConfiguration(const AppFabricClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AppFabricClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AppFabricBuiltInParameters::SetServiceSpecificParameters(const AppFabricClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AppFabric
}  // namespace Aws
