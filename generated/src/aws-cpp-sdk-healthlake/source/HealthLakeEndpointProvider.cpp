/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/HealthLakeEndpointProvider.h>
#include <aws/healthlake/internal/HealthLakeEndpointRules.h>

namespace Aws {
#ifndef AWS_HEALTHLAKE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<HealthLake::Endpoint::HealthLakeClientConfiguration,
                                                   HealthLake::Endpoint::HealthLakeBuiltInParameters,
                                                   HealthLake::Endpoint::HealthLakeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<HealthLake::Endpoint::HealthLakeClientConfiguration,
                                                  HealthLake::Endpoint::HealthLakeBuiltInParameters,
                                                  HealthLake::Endpoint::HealthLakeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace HealthLake {
namespace Endpoint {
HealthLakeEndpointProvider::HealthLakeEndpointProvider()
    : HealthLakeDefaultEpProviderBase(Aws::HealthLake::HealthLakeEndpointRules::GetRulesBlob(),
                                      Aws::HealthLake::HealthLakeEndpointRules::RulesBlobSize) {}

void HealthLakeBuiltInParameters::SetFromClientConfiguration(const HealthLakeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const HealthLakeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void HealthLakeBuiltInParameters::SetFromClientConfiguration(const HealthLakeClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const HealthLakeClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void HealthLakeBuiltInParameters::SetServiceSpecificParameters(const HealthLakeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace HealthLake
}  // namespace Aws
