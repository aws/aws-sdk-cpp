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
  enum class RouteMatrixZoneCategory
  {
    NOT_SET,
    CongestionPricing,
    Environmental,
    Vignette
  };

namespace RouteMatrixZoneCategoryMapper
{
AWS_GEOROUTES_API RouteMatrixZoneCategory GetRouteMatrixZoneCategoryForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteMatrixZoneCategory(RouteMatrixZoneCategory value);
} // namespace RouteMatrixZoneCategoryMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
