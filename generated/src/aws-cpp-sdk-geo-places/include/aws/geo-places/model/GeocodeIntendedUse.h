/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{
  enum class GeocodeIntendedUse
  {
    NOT_SET,
    SingleUse,
    Storage
  };

namespace GeocodeIntendedUseMapper
{
AWS_GEOPLACES_API GeocodeIntendedUse GetGeocodeIntendedUseForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForGeocodeIntendedUse(GeocodeIntendedUse value);
} // namespace GeocodeIntendedUseMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
