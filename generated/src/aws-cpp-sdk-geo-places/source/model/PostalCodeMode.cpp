/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/model/PostalCodeMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {
namespace PostalCodeModeMapper {

static const int MergeAllSpannedLocalities_HASH = HashingUtils::HashString("MergeAllSpannedLocalities");
static const int EnumerateSpannedLocalities_HASH = HashingUtils::HashString("EnumerateSpannedLocalities");
static const int EnumerateSpannedDistricts_HASH = HashingUtils::HashString("EnumerateSpannedDistricts");

PostalCodeMode GetPostalCodeModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MergeAllSpannedLocalities_HASH) {
    return PostalCodeMode::MergeAllSpannedLocalities;
  } else if (hashCode == EnumerateSpannedLocalities_HASH) {
    return PostalCodeMode::EnumerateSpannedLocalities;
  } else if (hashCode == EnumerateSpannedDistricts_HASH) {
    return PostalCodeMode::EnumerateSpannedDistricts;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PostalCodeMode>(hashCode);
  }

  return PostalCodeMode::NOT_SET;
}

Aws::String GetNameForPostalCodeMode(PostalCodeMode enumValue) {
  switch (enumValue) {
    case PostalCodeMode::NOT_SET:
      return {};
    case PostalCodeMode::MergeAllSpannedLocalities:
      return "MergeAllSpannedLocalities";
    case PostalCodeMode::EnumerateSpannedLocalities:
      return "EnumerateSpannedLocalities";
    case PostalCodeMode::EnumerateSpannedDistricts:
      return "EnumerateSpannedDistricts";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PostalCodeModeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
