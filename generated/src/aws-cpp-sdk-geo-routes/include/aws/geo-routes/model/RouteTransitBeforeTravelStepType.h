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
enum class RouteTransitBeforeTravelStepType { NOT_SET, Board };

namespace RouteTransitBeforeTravelStepTypeMapper {
AWS_GEOROUTES_API RouteTransitBeforeTravelStepType GetRouteTransitBeforeTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTransitBeforeTravelStepType(RouteTransitBeforeTravelStepType value);
}  // namespace RouteTransitBeforeTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
