/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/ECSEndpointProvider.h>
#include <aws/ecs/internal/ECSEndpointRules.h>

namespace Aws {
#ifndef AWS_ECS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ECS::Endpoint::ECSClientConfiguration, ECS::Endpoint::ECSBuiltInParameters,
                                                   ECS::Endpoint::ECSClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ECS::Endpoint::ECSClientConfiguration, ECS::Endpoint::ECSBuiltInParameters,
                                                  ECS::Endpoint::ECSClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ECS {
namespace Endpoint {
ECSEndpointProvider::ECSEndpointProvider()
    : ECSDefaultEpProviderBase(Aws::ECS::ECSEndpointRules::GetRulesBlob(), Aws::ECS::ECSEndpointRules::RulesBlobSize) {}

void ECSBuiltInParameters::SetFromClientConfiguration(const ECSClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ECSClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ECSBuiltInParameters::SetFromClientConfiguration(const ECSClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ECSClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ECSBuiltInParameters::SetServiceSpecificParameters(const ECSClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ECS
}  // namespace Aws
