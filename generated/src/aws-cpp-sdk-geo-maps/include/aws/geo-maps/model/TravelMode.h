/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoMaps
{
namespace Model
{
  enum class TravelMode
  {
    NOT_SET,
    Transit,
    Truck
  };

namespace TravelModeMapper
{
AWS_GEOMAPS_API TravelMode GetTravelModeForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForTravelMode(TravelMode value);
} // namespace TravelModeMapper
} // namespace Model
} // namespace GeoMaps
} // namespace Aws
