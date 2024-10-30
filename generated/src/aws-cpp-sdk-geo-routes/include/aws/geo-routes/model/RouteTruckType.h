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
  enum class RouteTruckType
  {
    NOT_SET,
    LightTruck,
    StraightTruck,
    Tractor
  };

namespace RouteTruckTypeMapper
{
AWS_GEOROUTES_API RouteTruckType GetRouteTruckTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTruckType(RouteTruckType value);
} // namespace RouteTruckTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
