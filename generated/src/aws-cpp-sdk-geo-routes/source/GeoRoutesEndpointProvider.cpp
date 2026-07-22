/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/GeoRoutesEndpointProvider.h>
#include <aws/geo-routes/internal/GeoRoutesEndpointRules.h>

namespace Aws {
namespace GeoRoutes {
namespace Endpoint {
GeoRoutesEndpointProvider::GeoRoutesEndpointProvider()
    : GeoRoutesDefaultEpProviderBase(Aws::GeoRoutes::GeoRoutesEndpointRules::GetRulesBlob(),
                                     Aws::GeoRoutes::GeoRoutesEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace GeoRoutes
}  // namespace Aws
