/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/LaunchWizardEndpointProvider.h>
#include <aws/launch-wizard/internal/LaunchWizardEndpointRules.h>

namespace Aws {
#ifndef AWS_LAUNCHWIZARD_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<LaunchWizard::Endpoint::LaunchWizardClientConfiguration,
                                                   LaunchWizard::Endpoint::LaunchWizardBuiltInParameters,
                                                   LaunchWizard::Endpoint::LaunchWizardClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<LaunchWizard::Endpoint::LaunchWizardClientConfiguration,
                                                  LaunchWizard::Endpoint::LaunchWizardBuiltInParameters,
                                                  LaunchWizard::Endpoint::LaunchWizardClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LaunchWizard {
namespace Endpoint {
LaunchWizardEndpointProvider::LaunchWizardEndpointProvider()
    : LaunchWizardDefaultEpProviderBase(Aws::LaunchWizard::LaunchWizardEndpointRules::GetRulesBlob(),
                                        Aws::LaunchWizard::LaunchWizardEndpointRules::RulesBlobSize) {}

void LaunchWizardBuiltInParameters::SetFromClientConfiguration(const LaunchWizardClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LaunchWizardClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LaunchWizardBuiltInParameters::SetFromClientConfiguration(const LaunchWizardClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LaunchWizardClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LaunchWizardBuiltInParameters::SetServiceSpecificParameters(const LaunchWizardClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LaunchWizard
}  // namespace Aws
