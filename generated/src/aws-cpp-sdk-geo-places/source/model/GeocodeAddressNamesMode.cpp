/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/model/GeocodeAddressNamesMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {
namespace GeocodeAddressNamesModeMapper {

static const int Matched_HASH = HashingUtils::HashString("Matched");
static const int Administrative_HASH = HashingUtils::HashString("Administrative");

GeocodeAddressNamesMode GetGeocodeAddressNamesModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Matched_HASH) {
    return GeocodeAddressNamesMode::Matched;
  } else if (hashCode == Administrative_HASH) {
    return GeocodeAddressNamesMode::Administrative;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GeocodeAddressNamesMode>(hashCode);
  }

  return GeocodeAddressNamesMode::NOT_SET;
}

Aws::String GetNameForGeocodeAddressNamesMode(GeocodeAddressNamesMode enumValue) {
  switch (enumValue) {
    case GeocodeAddressNamesMode::NOT_SET:
      return {};
    case GeocodeAddressNamesMode::Matched:
      return "Matched";
    case GeocodeAddressNamesMode::Administrative:
      return "Administrative";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GeocodeAddressNamesModeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
