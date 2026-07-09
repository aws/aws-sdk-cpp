/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/model/ReverseGeocodeAddressNamesMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {
namespace ReverseGeocodeAddressNamesModeMapper {

static const int Administrative_HASH = HashingUtils::HashString("Administrative");

ReverseGeocodeAddressNamesMode GetReverseGeocodeAddressNamesModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Administrative_HASH) {
    return ReverseGeocodeAddressNamesMode::Administrative;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReverseGeocodeAddressNamesMode>(hashCode);
  }

  return ReverseGeocodeAddressNamesMode::NOT_SET;
}

Aws::String GetNameForReverseGeocodeAddressNamesMode(ReverseGeocodeAddressNamesMode enumValue) {
  switch (enumValue) {
    case ReverseGeocodeAddressNamesMode::NOT_SET:
      return {};
    case ReverseGeocodeAddressNamesMode::Administrative:
      return "Administrative";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReverseGeocodeAddressNamesModeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
