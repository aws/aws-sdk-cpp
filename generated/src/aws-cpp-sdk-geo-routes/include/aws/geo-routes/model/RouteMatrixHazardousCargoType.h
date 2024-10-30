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
  enum class RouteMatrixHazardousCargoType
  {
    NOT_SET,
    Combustible,
    Corrosive,
    Explosive,
    Flammable,
    Gas,
    HarmfulToWater,
    Organic,
    Other,
    Poison,
    PoisonousInhalation,
    Radioactive
  };

namespace RouteMatrixHazardousCargoTypeMapper
{
AWS_GEOROUTES_API RouteMatrixHazardousCargoType GetRouteMatrixHazardousCargoTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteMatrixHazardousCargoType(RouteMatrixHazardousCargoType value);
} // namespace RouteMatrixHazardousCargoTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
