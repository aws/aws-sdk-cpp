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
  enum class RouteTollVehicleCategory
  {
    NOT_SET,
    Minibus
  };

namespace RouteTollVehicleCategoryMapper
{
AWS_GEOROUTES_API RouteTollVehicleCategory GetRouteTollVehicleCategoryForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTollVehicleCategory(RouteTollVehicleCategory value);
} // namespace RouteTollVehicleCategoryMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
