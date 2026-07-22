/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/ApplicationInsightsEndpointProvider.h>
#include <aws/application-insights/internal/ApplicationInsightsEndpointRules.h>

namespace Aws {
namespace ApplicationInsights {
namespace Endpoint {
ApplicationInsightsEndpointProvider::ApplicationInsightsEndpointProvider()
    : ApplicationInsightsDefaultEpProviderBase(Aws::ApplicationInsights::ApplicationInsightsEndpointRules::GetRulesBlob(),
                                               Aws::ApplicationInsights::ApplicationInsightsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ApplicationInsights
}  // namespace Aws
