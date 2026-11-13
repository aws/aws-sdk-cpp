/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/LightsailEndpointProvider.h>
#include <aws/lightsail/internal/LightsailEndpointRules.h>

namespace Aws {
#ifndef AWS_LIGHTSAIL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Lightsail::Endpoint::LightsailClientConfiguration,
                                                   Lightsail::Endpoint::LightsailBuiltInParameters,
                                                   Lightsail::Endpoint::LightsailClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Lightsail::Endpoint::LightsailClientConfiguration,
                                                  Lightsail::Endpoint::LightsailBuiltInParameters,
                                                  Lightsail::Endpoint::LightsailClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Lightsail {
namespace Endpoint {
LightsailEndpointProvider::LightsailEndpointProvider()
    : LightsailDefaultEpProviderBase(Aws::Lightsail::LightsailEndpointRules::GetRulesBlob(),
                                     Aws::Lightsail::LightsailEndpointRules::RulesBlobSize) {}

void LightsailBuiltInParameters::SetFromClientConfiguration(const LightsailClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LightsailClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LightsailBuiltInParameters::SetFromClientConfiguration(const LightsailClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LightsailClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LightsailBuiltInParameters::SetServiceSpecificParameters(const LightsailClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Lightsail
}  // namespace Aws
