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
  enum class ReverseGeocodeAdditionalFeature
  {
    NOT_SET,
    TimeZone,
    Access,
    Intersections
  };

namespace ReverseGeocodeAdditionalFeatureMapper
{
AWS_GEOPLACES_API ReverseGeocodeAdditionalFeature GetReverseGeocodeAdditionalFeatureForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForReverseGeocodeAdditionalFeature(ReverseGeocodeAdditionalFeature value);
} // namespace ReverseGeocodeAdditionalFeatureMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
