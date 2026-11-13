/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/AmplifyBackendEndpointProvider.h>
#include <aws/amplifybackend/internal/AmplifyBackendEndpointRules.h>

namespace Aws {
#ifndef AWS_AMPLIFYBACKEND_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AmplifyBackend::Endpoint::AmplifyBackendClientConfiguration,
                                                   AmplifyBackend::Endpoint::AmplifyBackendBuiltInParameters,
                                                   AmplifyBackend::Endpoint::AmplifyBackendClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AmplifyBackend::Endpoint::AmplifyBackendClientConfiguration,
                                                  AmplifyBackend::Endpoint::AmplifyBackendBuiltInParameters,
                                                  AmplifyBackend::Endpoint::AmplifyBackendClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AmplifyBackend {
namespace Endpoint {
AmplifyBackendEndpointProvider::AmplifyBackendEndpointProvider()
    : AmplifyBackendDefaultEpProviderBase(Aws::AmplifyBackend::AmplifyBackendEndpointRules::GetRulesBlob(),
                                          Aws::AmplifyBackend::AmplifyBackendEndpointRules::RulesBlobSize) {}

void AmplifyBackendBuiltInParameters::SetFromClientConfiguration(const AmplifyBackendClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AmplifyBackendClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AmplifyBackendBuiltInParameters::SetFromClientConfiguration(const AmplifyBackendClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AmplifyBackendClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AmplifyBackendBuiltInParameters::SetServiceSpecificParameters(const AmplifyBackendClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AmplifyBackend
}  // namespace Aws
