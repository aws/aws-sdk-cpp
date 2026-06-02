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
enum class RouteTransitAfterTravelStepType { NOT_SET, Deboard };

namespace RouteTransitAfterTravelStepTypeMapper {
AWS_GEOROUTES_API RouteTransitAfterTravelStepType GetRouteTransitAfterTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTransitAfterTravelStepType(RouteTransitAfterTravelStepType value);
}  // namespace RouteTransitAfterTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
