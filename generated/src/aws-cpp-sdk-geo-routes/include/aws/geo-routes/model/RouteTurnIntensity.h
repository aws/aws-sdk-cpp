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
  enum class RouteTurnIntensity
  {
    NOT_SET,
    Sharp,
    Slight,
    Typical
  };

namespace RouteTurnIntensityMapper
{
AWS_GEOROUTES_API RouteTurnIntensity GetRouteTurnIntensityForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTurnIntensity(RouteTurnIntensity value);
} // namespace RouteTurnIntensityMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
