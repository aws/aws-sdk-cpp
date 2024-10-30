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
  enum class RouteEngineType
  {
    NOT_SET,
    Electric,
    InternalCombustion,
    PluginHybrid
  };

namespace RouteEngineTypeMapper
{
AWS_GEOROUTES_API RouteEngineType GetRouteEngineTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteEngineType(RouteEngineType value);
} // namespace RouteEngineTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
