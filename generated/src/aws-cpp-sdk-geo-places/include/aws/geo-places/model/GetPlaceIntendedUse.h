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
  enum class GetPlaceIntendedUse
  {
    NOT_SET,
    SingleUse,
    Storage
  };

namespace GetPlaceIntendedUseMapper
{
AWS_GEOPLACES_API GetPlaceIntendedUse GetGetPlaceIntendedUseForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForGetPlaceIntendedUse(GetPlaceIntendedUse value);
} // namespace GetPlaceIntendedUseMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
