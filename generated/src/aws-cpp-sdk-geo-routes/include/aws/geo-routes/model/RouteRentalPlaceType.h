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
enum class RouteRentalPlaceType { NOT_SET, AccessPoint, DockingStation, ParkingLot, Station };

namespace RouteRentalPlaceTypeMapper {
AWS_GEOROUTES_API RouteRentalPlaceType GetRouteRentalPlaceTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteRentalPlaceType(RouteRentalPlaceType value);
}  // namespace RouteRentalPlaceTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
