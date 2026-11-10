/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/AppRunnerEndpointProvider.h>
#include <aws/apprunner/internal/AppRunnerEndpointRules.h>

namespace Aws {
#ifndef AWS_APPRUNNER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AppRunner::Endpoint::AppRunnerClientConfiguration,
                                                   AppRunner::Endpoint::AppRunnerBuiltInParameters,
                                                   AppRunner::Endpoint::AppRunnerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AppRunner::Endpoint::AppRunnerClientConfiguration,
                                                  AppRunner::Endpoint::AppRunnerBuiltInParameters,
                                                  AppRunner::Endpoint::AppRunnerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AppRunner {
namespace Endpoint {
AppRunnerEndpointProvider::AppRunnerEndpointProvider()
    : AppRunnerDefaultEpProviderBase(Aws::AppRunner::AppRunnerEndpointRules::GetRulesBlob(),
                                     Aws::AppRunner::AppRunnerEndpointRules::RulesBlobSize) {}

void AppRunnerBuiltInParameters::SetFromClientConfiguration(const AppRunnerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AppRunnerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AppRunnerBuiltInParameters::SetFromClientConfiguration(const AppRunnerClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AppRunnerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AppRunnerBuiltInParameters::SetServiceSpecificParameters(const AppRunnerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AppRunner
}  // namespace Aws
