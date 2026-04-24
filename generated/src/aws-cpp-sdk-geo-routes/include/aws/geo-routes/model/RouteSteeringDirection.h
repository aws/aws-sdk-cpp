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
enum class RouteSteeringDirection { NOT_SET, Left, Right, Straight };

namespace RouteSteeringDirectionMapper {
AWS_GEOROUTES_API RouteSteeringDirection GetRouteSteeringDirectionForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteSteeringDirection(RouteSteeringDirection value);
}  // namespace RouteSteeringDirectionMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
