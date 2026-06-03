/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

namespace Aws {
namespace GeoRoutes {
namespace Model {
enum class RouteTransitIntermediateStopAttribute { NOT_SET, NoEntry, NoExit };

namespace RouteTransitIntermediateStopAttributeMapper {
AWS_GEOROUTES_API RouteTransitIntermediateStopAttribute GetRouteTransitIntermediateStopAttributeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTransitIntermediateStopAttribute(RouteTransitIntermediateStopAttribute value);
}  // namespace RouteTransitIntermediateStopAttributeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
