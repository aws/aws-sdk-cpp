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
enum class SearchTextIntendedUse { NOT_SET, SingleUse, Storage };

namespace SearchTextIntendedUseMapper {
AWS_GEOPLACES_API SearchTextIntendedUse GetSearchTextIntendedUseForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForSearchTextIntendedUse(SearchTextIntendedUse value);
}  // namespace SearchTextIntendedUseMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
