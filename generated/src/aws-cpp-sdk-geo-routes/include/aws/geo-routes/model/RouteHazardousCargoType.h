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
  enum class RouteHazardousCargoType
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

namespace RouteHazardousCargoTypeMapper
{
AWS_GEOROUTES_API RouteHazardousCargoType GetRouteHazardousCargoTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteHazardousCargoType(RouteHazardousCargoType value);
} // namespace RouteHazardousCargoTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
