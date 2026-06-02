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
enum class RouteTaxiPlaceType { NOT_SET, AccessPoint, Station };

namespace RouteTaxiPlaceTypeMapper {
AWS_GEOROUTES_API RouteTaxiPlaceType GetRouteTaxiPlaceTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTaxiPlaceType(RouteTaxiPlaceType value);
}  // namespace RouteTaxiPlaceTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
