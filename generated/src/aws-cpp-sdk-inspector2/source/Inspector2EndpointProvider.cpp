/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/Inspector2EndpointProvider.h>
#include <aws/inspector2/internal/Inspector2EndpointRules.h>

namespace Aws {
#ifndef AWS_INSPECTOR2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Inspector2::Endpoint::Inspector2ClientConfiguration,
                                                   Inspector2::Endpoint::Inspector2BuiltInParameters,
                                                   Inspector2::Endpoint::Inspector2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Inspector2::Endpoint::Inspector2ClientConfiguration,
                                                  Inspector2::Endpoint::Inspector2BuiltInParameters,
                                                  Inspector2::Endpoint::Inspector2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Inspector2 {
namespace Endpoint {
Inspector2EndpointProvider::Inspector2EndpointProvider()
    : Inspector2DefaultEpProviderBase(Aws::Inspector2::Inspector2EndpointRules::GetRulesBlob(),
                                      Aws::Inspector2::Inspector2EndpointRules::RulesBlobSize) {}

void Inspector2BuiltInParameters::SetFromClientConfiguration(const Inspector2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const Inspector2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void Inspector2BuiltInParameters::SetFromClientConfiguration(const Inspector2ClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const Inspector2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void Inspector2BuiltInParameters::SetServiceSpecificParameters(const Inspector2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Inspector2
}  // namespace Aws
