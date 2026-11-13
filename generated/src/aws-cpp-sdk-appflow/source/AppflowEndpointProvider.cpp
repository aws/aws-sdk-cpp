/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/AppflowEndpointProvider.h>
#include <aws/appflow/internal/AppflowEndpointRules.h>

namespace Aws {
#ifndef AWS_APPFLOW_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Appflow::Endpoint::AppflowClientConfiguration,
                                                   Appflow::Endpoint::AppflowBuiltInParameters,
                                                   Appflow::Endpoint::AppflowClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Appflow::Endpoint::AppflowClientConfiguration,
                                                  Appflow::Endpoint::AppflowBuiltInParameters,
                                                  Appflow::Endpoint::AppflowClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Appflow {
namespace Endpoint {
AppflowEndpointProvider::AppflowEndpointProvider()
    : AppflowDefaultEpProviderBase(Aws::Appflow::AppflowEndpointRules::GetRulesBlob(), Aws::Appflow::AppflowEndpointRules::RulesBlobSize) {}

void AppflowBuiltInParameters::SetFromClientConfiguration(const AppflowClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AppflowClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AppflowBuiltInParameters::SetFromClientConfiguration(const AppflowClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AppflowClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AppflowBuiltInParameters::SetServiceSpecificParameters(const AppflowClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Appflow
}  // namespace Aws
