/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/BCMDashboardsEndpointProvider.h>
#include <aws/bcm-dashboards/internal/BCMDashboardsEndpointRules.h>

namespace Aws {
namespace BCMDashboards {
namespace Endpoint {
BCMDashboardsEndpointProvider::BCMDashboardsEndpointProvider()
    : BCMDashboardsDefaultEpProviderBase(Aws::BCMDashboards::BCMDashboardsEndpointRules::GetRulesBlob(),
                                         Aws::BCMDashboards::BCMDashboardsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace BCMDashboards
}  // namespace Aws
