/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/EntityResolutionEndpointProvider.h>
#include <aws/entityresolution/internal/EntityResolutionEndpointRules.h>

namespace Aws {
#ifndef AWS_ENTITYRESOLUTION_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EntityResolution::Endpoint::EntityResolutionClientConfiguration,
                                                   EntityResolution::Endpoint::EntityResolutionBuiltInParameters,
                                                   EntityResolution::Endpoint::EntityResolutionClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EntityResolution::Endpoint::EntityResolutionClientConfiguration,
                                                  EntityResolution::Endpoint::EntityResolutionBuiltInParameters,
                                                  EntityResolution::Endpoint::EntityResolutionClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EntityResolution {
namespace Endpoint {
EntityResolutionEndpointProvider::EntityResolutionEndpointProvider()
    : EntityResolutionDefaultEpProviderBase(Aws::EntityResolution::EntityResolutionEndpointRules::GetRulesBlob(),
                                            Aws::EntityResolution::EntityResolutionEndpointRules::RulesBlobSize) {}

void EntityResolutionBuiltInParameters::SetFromClientConfiguration(const EntityResolutionClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EntityResolutionClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EntityResolutionBuiltInParameters::SetFromClientConfiguration(const EntityResolutionClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EntityResolutionClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EntityResolutionBuiltInParameters::SetServiceSpecificParameters(const EntityResolutionClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace EntityResolution
}  // namespace Aws
