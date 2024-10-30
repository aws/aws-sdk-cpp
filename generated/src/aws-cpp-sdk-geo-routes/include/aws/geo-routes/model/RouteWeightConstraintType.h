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
  enum class RouteWeightConstraintType
  {
    NOT_SET,
    Current,
    Gross,
    Unknown
  };

namespace RouteWeightConstraintTypeMapper
{
AWS_GEOROUTES_API RouteWeightConstraintType GetRouteWeightConstraintTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteWeightConstraintType(RouteWeightConstraintType value);
} // namespace RouteWeightConstraintTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
