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
enum class RouteRentalMode { NOT_SET, All, Car };

namespace RouteRentalModeMapper {
AWS_GEOROUTES_API RouteRentalMode GetRouteRentalModeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteRentalMode(RouteRentalMode value);
}  // namespace RouteRentalModeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
