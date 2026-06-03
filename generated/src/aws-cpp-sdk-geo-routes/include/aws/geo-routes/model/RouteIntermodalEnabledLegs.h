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
enum class RouteIntermodalEnabledLegs { NOT_SET, FirstLeg, LastLeg, EntireRoute, None };

namespace RouteIntermodalEnabledLegsMapper {
AWS_GEOROUTES_API RouteIntermodalEnabledLegs GetRouteIntermodalEnabledLegsForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteIntermodalEnabledLegs(RouteIntermodalEnabledLegs value);
}  // namespace RouteIntermodalEnabledLegsMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
