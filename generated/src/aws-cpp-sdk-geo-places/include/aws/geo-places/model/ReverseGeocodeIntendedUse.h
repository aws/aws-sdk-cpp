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
  enum class ReverseGeocodeIntendedUse
  {
    NOT_SET,
    SingleUse,
    Storage
  };

namespace ReverseGeocodeIntendedUseMapper
{
AWS_GEOPLACES_API ReverseGeocodeIntendedUse GetReverseGeocodeIntendedUseForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForReverseGeocodeIntendedUse(ReverseGeocodeIntendedUse value);
} // namespace ReverseGeocodeIntendedUseMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
