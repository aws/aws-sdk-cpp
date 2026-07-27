/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/PrometheusServiceEndpointProvider.h>
#include <aws/amp/internal/PrometheusServiceEndpointRules.h>

namespace Aws {
namespace PrometheusService {
namespace Endpoint {
PrometheusServiceEndpointProvider::PrometheusServiceEndpointProvider()
    : PrometheusServiceDefaultEpProviderBase(Aws::PrometheusService::PrometheusServiceEndpointRules::GetRulesBlob(),
                                             Aws::PrometheusService::PrometheusServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace PrometheusService
}  // namespace Aws
