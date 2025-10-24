﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>

namespace Aws {
namespace GeoPlaces {
namespace Model {
enum class AutocompleteIntendedUse { NOT_SET, SingleUse };

namespace AutocompleteIntendedUseMapper {
AWS_GEOPLACES_API AutocompleteIntendedUse GetAutocompleteIntendedUseForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForAutocompleteIntendedUse(AutocompleteIntendedUse value);
}  // namespace AutocompleteIntendedUseMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
