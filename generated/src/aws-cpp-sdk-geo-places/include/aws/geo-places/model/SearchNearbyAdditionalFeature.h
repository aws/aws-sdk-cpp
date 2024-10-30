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
  enum class SearchNearbyAdditionalFeature
  {
    NOT_SET,
    TimeZone,
    Phonemes,
    Access,
    Contact
  };

namespace SearchNearbyAdditionalFeatureMapper
{
AWS_GEOPLACES_API SearchNearbyAdditionalFeature GetSearchNearbyAdditionalFeatureForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForSearchNearbyAdditionalFeature(SearchNearbyAdditionalFeature value);
} // namespace SearchNearbyAdditionalFeatureMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
