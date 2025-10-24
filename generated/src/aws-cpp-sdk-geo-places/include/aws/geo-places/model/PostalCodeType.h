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
enum class PostalCodeType { NOT_SET, UspsZip, UspsZipPlus4 };

namespace PostalCodeTypeMapper {
AWS_GEOPLACES_API PostalCodeType GetPostalCodeTypeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForPostalCodeType(PostalCodeType value);
}  // namespace PostalCodeTypeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
