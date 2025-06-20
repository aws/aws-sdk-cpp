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
  enum class GetPlaceAdditionalFeature
  {
    NOT_SET,
    TimeZone,
    Phonemes,
    Access,
    Contact,
    SecondaryAddresses
  };

namespace GetPlaceAdditionalFeatureMapper
{
AWS_GEOPLACES_API GetPlaceAdditionalFeature GetGetPlaceAdditionalFeatureForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForGetPlaceAdditionalFeature(GetPlaceAdditionalFeature value);
} // namespace GetPlaceAdditionalFeatureMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
