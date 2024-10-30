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
  enum class ScaleBarUnit
  {
    NOT_SET,
    Kilometers,
    KilometersMiles,
    Miles,
    MilesKilometers
  };

namespace ScaleBarUnitMapper
{
AWS_GEOMAPS_API ScaleBarUnit GetScaleBarUnitForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForScaleBarUnit(ScaleBarUnit value);
} // namespace ScaleBarUnitMapper
} // namespace Model
} // namespace GeoMaps
} // namespace Aws
