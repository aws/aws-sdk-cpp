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
  enum class PostalCodeMode
  {
    NOT_SET,
    MergeAllSpannedLocalities,
    EnumerateSpannedLocalities
  };

namespace PostalCodeModeMapper
{
AWS_GEOPLACES_API PostalCodeMode GetPostalCodeModeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForPostalCodeMode(PostalCodeMode value);
} // namespace PostalCodeModeMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
