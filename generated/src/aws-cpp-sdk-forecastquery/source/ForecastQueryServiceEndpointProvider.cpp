/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecastquery/ForecastQueryServiceEndpointProvider.h>
#include <aws/forecastquery/internal/ForecastQueryServiceEndpointRules.h>

namespace Aws {
namespace ForecastQueryService {
namespace Endpoint {
ForecastQueryServiceEndpointProvider::ForecastQueryServiceEndpointProvider()
    : ForecastQueryServiceDefaultEpProviderBase(Aws::ForecastQueryService::ForecastQueryServiceEndpointRules::GetRulesBlob(),
                                                Aws::ForecastQueryService::ForecastQueryServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ForecastQueryService
}  // namespace Aws
