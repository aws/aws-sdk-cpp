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
  enum class AutocompleteAdditionalFeature
  {
    NOT_SET,
    Core
  };

namespace AutocompleteAdditionalFeatureMapper
{
AWS_GEOPLACES_API AutocompleteAdditionalFeature GetAutocompleteAdditionalFeatureForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForAutocompleteAdditionalFeature(AutocompleteAdditionalFeature value);
} // namespace AutocompleteAdditionalFeatureMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
