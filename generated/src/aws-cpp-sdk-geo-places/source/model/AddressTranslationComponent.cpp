/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/model/AddressTranslationComponent.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {
namespace AddressTranslationComponentMapper {

static const int District_HASH = HashingUtils::HashString("District");
static const int Locality_HASH = HashingUtils::HashString("Locality");
static const int Region_HASH = HashingUtils::HashString("Region");
static const int SubRegion_HASH = HashingUtils::HashString("SubRegion");

AddressTranslationComponent GetAddressTranslationComponentForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == District_HASH) {
    return AddressTranslationComponent::District;
  } else if (hashCode == Locality_HASH) {
    return AddressTranslationComponent::Locality;
  } else if (hashCode == Region_HASH) {
    return AddressTranslationComponent::Region;
  } else if (hashCode == SubRegion_HASH) {
    return AddressTranslationComponent::SubRegion;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AddressTranslationComponent>(hashCode);
  }

  return AddressTranslationComponent::NOT_SET;
}

Aws::String GetNameForAddressTranslationComponent(AddressTranslationComponent enumValue) {
  switch (enumValue) {
    case AddressTranslationComponent::NOT_SET:
      return {};
    case AddressTranslationComponent::District:
      return "District";
    case AddressTranslationComponent::Locality:
      return "Locality";
    case AddressTranslationComponent::Region:
      return "Region";
    case AddressTranslationComponent::SubRegion:
      return "SubRegion";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AddressTranslationComponentMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
