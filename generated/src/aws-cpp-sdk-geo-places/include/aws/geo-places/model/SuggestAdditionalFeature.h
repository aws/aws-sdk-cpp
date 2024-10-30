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
  enum class SuggestAdditionalFeature
  {
    NOT_SET,
    Core,
    TimeZone,
    Phonemes,
    Access
  };

namespace SuggestAdditionalFeatureMapper
{
AWS_GEOPLACES_API SuggestAdditionalFeature GetSuggestAdditionalFeatureForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForSuggestAdditionalFeature(SuggestAdditionalFeature value);
} // namespace SuggestAdditionalFeatureMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
