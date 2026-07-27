/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/ApplicationCostProfilerEndpointProvider.h>
#include <aws/applicationcostprofiler/internal/ApplicationCostProfilerEndpointRules.h>

namespace Aws {
namespace ApplicationCostProfiler {
namespace Endpoint {
ApplicationCostProfilerEndpointProvider::ApplicationCostProfilerEndpointProvider()
    : ApplicationCostProfilerDefaultEpProviderBase(Aws::ApplicationCostProfiler::ApplicationCostProfilerEndpointRules::GetRulesBlob(),
                                                   Aws::ApplicationCostProfiler::ApplicationCostProfilerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ApplicationCostProfiler
}  // namespace Aws
