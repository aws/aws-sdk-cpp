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
enum class RouteVehicleAfterTravelStepType { NOT_SET, Park };

namespace RouteVehicleAfterTravelStepTypeMapper {
AWS_GEOROUTES_API RouteVehicleAfterTravelStepType GetRouteVehicleAfterTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteVehicleAfterTravelStepType(RouteVehicleAfterTravelStepType value);
}  // namespace RouteVehicleAfterTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
