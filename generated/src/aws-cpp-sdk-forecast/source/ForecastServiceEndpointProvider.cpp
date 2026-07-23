/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/ForecastServiceEndpointProvider.h>
#include <aws/forecast/internal/ForecastServiceEndpointRules.h>

namespace Aws {
namespace ForecastService {
namespace Endpoint {
ForecastServiceEndpointProvider::ForecastServiceEndpointProvider()
    : ForecastServiceDefaultEpProviderBase(Aws::ForecastService::ForecastServiceEndpointRules::GetRulesBlob(),
                                           Aws::ForecastService::ForecastServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ForecastService
}  // namespace Aws
