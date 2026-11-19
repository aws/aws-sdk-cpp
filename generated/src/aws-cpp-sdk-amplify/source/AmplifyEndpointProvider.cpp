/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/AmplifyEndpointProvider.h>
#include <aws/amplify/internal/AmplifyEndpointRules.h>

namespace Aws {
#ifndef AWS_AMPLIFY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Amplify::Endpoint::AmplifyClientConfiguration,
                                                   Amplify::Endpoint::AmplifyBuiltInParameters,
                                                   Amplify::Endpoint::AmplifyClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Amplify::Endpoint::AmplifyClientConfiguration,
                                                  Amplify::Endpoint::AmplifyBuiltInParameters,
                                                  Amplify::Endpoint::AmplifyClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Amplify {
namespace Endpoint {
AmplifyEndpointProvider::AmplifyEndpointProvider()
    : AmplifyDefaultEpProviderBase(Aws::Amplify::AmplifyEndpointRules::GetRulesBlob(), Aws::Amplify::AmplifyEndpointRules::RulesBlobSize) {}

void AmplifyBuiltInParameters::SetFromClientConfiguration(const AmplifyClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AmplifyClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AmplifyBuiltInParameters::SetFromClientConfiguration(const AmplifyClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AmplifyClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AmplifyBuiltInParameters::SetServiceSpecificParameters(const AmplifyClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Amplify
}  // namespace Aws
