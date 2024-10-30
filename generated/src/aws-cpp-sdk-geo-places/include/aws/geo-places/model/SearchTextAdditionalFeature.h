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
  enum class SearchTextAdditionalFeature
  {
    NOT_SET,
    TimeZone,
    Phonemes,
    Access,
    Contact
  };

namespace SearchTextAdditionalFeatureMapper
{
AWS_GEOPLACES_API SearchTextAdditionalFeature GetSearchTextAdditionalFeatureForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForSearchTextAdditionalFeature(SearchTextAdditionalFeature value);
} // namespace SearchTextAdditionalFeatureMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
