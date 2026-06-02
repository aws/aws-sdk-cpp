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
enum class RouteTransitPlaceType { NOT_SET, Station };

namespace RouteTransitPlaceTypeMapper {
AWS_GEOROUTES_API RouteTransitPlaceType GetRouteTransitPlaceTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTransitPlaceType(RouteTransitPlaceType value);
}  // namespace RouteTransitPlaceTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
