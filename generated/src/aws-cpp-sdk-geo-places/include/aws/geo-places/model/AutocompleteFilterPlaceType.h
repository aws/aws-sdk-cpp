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
  enum class AutocompleteFilterPlaceType
  {
    NOT_SET,
    Locality,
    PostalCode
  };

namespace AutocompleteFilterPlaceTypeMapper
{
AWS_GEOPLACES_API AutocompleteFilterPlaceType GetAutocompleteFilterPlaceTypeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForAutocompleteFilterPlaceType(AutocompleteFilterPlaceType value);
} // namespace AutocompleteFilterPlaceTypeMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
