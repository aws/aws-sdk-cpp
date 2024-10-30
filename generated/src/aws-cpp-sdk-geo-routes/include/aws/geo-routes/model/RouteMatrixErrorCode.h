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
  enum class RouteMatrixErrorCode
  {
    NOT_SET,
    NoMatch,
    NoMatchDestination,
    NoMatchOrigin,
    NoRoute,
    OutOfBounds,
    OutOfBoundsDestination,
    OutOfBoundsOrigin,
    Other,
    Violation
  };

namespace RouteMatrixErrorCodeMapper
{
AWS_GEOROUTES_API RouteMatrixErrorCode GetRouteMatrixErrorCodeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteMatrixErrorCode(RouteMatrixErrorCode value);
} // namespace RouteMatrixErrorCodeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
