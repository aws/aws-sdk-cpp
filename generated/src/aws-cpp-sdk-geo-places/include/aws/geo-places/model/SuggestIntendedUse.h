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
  enum class SuggestIntendedUse
  {
    NOT_SET,
    SingleUse
  };

namespace SuggestIntendedUseMapper
{
AWS_GEOPLACES_API SuggestIntendedUse GetSuggestIntendedUseForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForSuggestIntendedUse(SuggestIntendedUse value);
} // namespace SuggestIntendedUseMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
