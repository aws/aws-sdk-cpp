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
enum class RouteRentalAfterTravelStepType { NOT_SET, Park };

namespace RouteRentalAfterTravelStepTypeMapper {
AWS_GEOROUTES_API RouteRentalAfterTravelStepType GetRouteRentalAfterTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteRentalAfterTravelStepType(RouteRentalAfterTravelStepType value);
}  // namespace RouteRentalAfterTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
