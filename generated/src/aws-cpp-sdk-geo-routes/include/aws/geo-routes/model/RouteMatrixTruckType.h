/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{
  enum class RouteMatrixTruckType
  {
    NOT_SET,
    LightTruck,
    StraightTruck,
    Tractor
  };

namespace RouteMatrixTruckTypeMapper
{
AWS_GEOROUTES_API RouteMatrixTruckType GetRouteMatrixTruckTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteMatrixTruckType(RouteMatrixTruckType value);
} // namespace RouteMatrixTruckTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
