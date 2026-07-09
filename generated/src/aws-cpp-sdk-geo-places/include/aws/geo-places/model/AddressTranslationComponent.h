/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>

namespace Aws {
namespace GeoPlaces {
namespace Model {
enum class AddressTranslationComponent { NOT_SET, District, Locality, Region, SubRegion };

namespace AddressTranslationComponentMapper {
AWS_GEOPLACES_API AddressTranslationComponent GetAddressTranslationComponentForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForAddressTranslationComponent(AddressTranslationComponent value);
}  // namespace AddressTranslationComponentMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
