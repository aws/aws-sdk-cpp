/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-recommended-actions/BCMRecommendedActionsEndpointProvider.h>
#include <aws/bcm-recommended-actions/internal/BCMRecommendedActionsEndpointRules.h>

namespace Aws {
#ifndef AWS_BCMRECOMMENDEDACTIONS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<BCMRecommendedActions::Endpoint::BCMRecommendedActionsClientConfiguration,
                                                   BCMRecommendedActions::Endpoint::BCMRecommendedActionsBuiltInParameters,
                                                   BCMRecommendedActions::Endpoint::BCMRecommendedActionsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<BCMRecommendedActions::Endpoint::BCMRecommendedActionsClientConfiguration,
                                                  BCMRecommendedActions::Endpoint::BCMRecommendedActionsBuiltInParameters,
                                                  BCMRecommendedActions::Endpoint::BCMRecommendedActionsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BCMRecommendedActions {
namespace Endpoint {
BCMRecommendedActionsEndpointProvider::BCMRecommendedActionsEndpointProvider()
    : BCMRecommendedActionsDefaultEpProviderBase(Aws::BCMRecommendedActions::BCMRecommendedActionsEndpointRules::GetRulesBlob(),
                                                 Aws::BCMRecommendedActions::BCMRecommendedActionsEndpointRules::RulesBlobSize) {}

void BCMRecommendedActionsBuiltInParameters::SetFromClientConfiguration(const BCMRecommendedActionsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BCMRecommendedActionsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BCMRecommendedActionsBuiltInParameters::SetFromClientConfiguration(const BCMRecommendedActionsClientConfiguration& config,
                                                                        const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BCMRecommendedActionsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BCMRecommendedActionsBuiltInParameters::SetServiceSpecificParameters(const BCMRecommendedActionsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace BCMRecommendedActions
}  // namespace Aws
