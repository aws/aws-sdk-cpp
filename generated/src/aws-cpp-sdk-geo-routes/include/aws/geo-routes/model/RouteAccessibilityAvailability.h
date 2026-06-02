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
enum class RouteAccessibilityAvailability { NOT_SET, Available, Limited, Unavailable, Unknown };

namespace RouteAccessibilityAvailabilityMapper {
AWS_GEOROUTES_API RouteAccessibilityAvailability GetRouteAccessibilityAvailabilityForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteAccessibilityAvailability(RouteAccessibilityAvailability value);
}  // namespace RouteAccessibilityAvailabilityMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
