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
  enum class ContourDensity
  {
    NOT_SET,
    Medium
  };

namespace ContourDensityMapper
{
AWS_GEOMAPS_API ContourDensity GetContourDensityForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForContourDensity(ContourDensity value);
} // namespace ContourDensityMapper
} // namespace Model
} // namespace GeoMaps
} // namespace Aws
