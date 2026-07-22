/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-recommended-actions/BCMRecommendedActionsEndpointProvider.h>
#include <aws/bcm-recommended-actions/internal/BCMRecommendedActionsEndpointRules.h>

namespace Aws {
namespace BCMRecommendedActions {
namespace Endpoint {
BCMRecommendedActionsEndpointProvider::BCMRecommendedActionsEndpointProvider()
    : BCMRecommendedActionsDefaultEpProviderBase(Aws::BCMRecommendedActions::BCMRecommendedActionsEndpointRules::GetRulesBlob(),
                                                 Aws::BCMRecommendedActions::BCMRecommendedActionsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace BCMRecommendedActions
}  // namespace Aws
