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
enum class SuggestResultItemType { NOT_SET, Place, Query };

namespace SuggestResultItemTypeMapper {
AWS_GEOPLACES_API SuggestResultItemType GetSuggestResultItemTypeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForSuggestResultItemType(SuggestResultItemType value);
}  // namespace SuggestResultItemTypeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
