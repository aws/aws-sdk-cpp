/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/HealthEndpointProvider.h>
#include <aws/health/internal/HealthEndpointRules.h>

namespace Aws {
#ifndef AWS_HEALTH_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Health::Endpoint::HealthClientConfiguration, Health::Endpoint::HealthBuiltInParameters,
                                                   Health::Endpoint::HealthClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Health::Endpoint::HealthClientConfiguration, Health::Endpoint::HealthBuiltInParameters,
                                                  Health::Endpoint::HealthClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Health {
namespace Endpoint {
HealthEndpointProvider::HealthEndpointProvider()
    : HealthDefaultEpProviderBase(Aws::Health::HealthEndpointRules::GetRulesBlob(), Aws::Health::HealthEndpointRules::RulesBlobSize) {}

void HealthBuiltInParameters::SetFromClientConfiguration(const HealthClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const HealthClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void HealthBuiltInParameters::SetFromClientConfiguration(const HealthClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const HealthClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void HealthBuiltInParameters::SetServiceSpecificParameters(const HealthClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Health
}  // namespace Aws
