/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-maps/model/PoiDensity.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoMaps {
namespace Model {
namespace PoiDensityMapper {

static const int Off_HASH = HashingUtils::HashString("Off");
static const int VerySparse_HASH = HashingUtils::HashString("VerySparse");
static const int Sparse_HASH = HashingUtils::HashString("Sparse");
static const int Default_HASH = HashingUtils::HashString("Default");
static const int Dense_HASH = HashingUtils::HashString("Dense");
static const int VeryDense_HASH = HashingUtils::HashString("VeryDense");

PoiDensity GetPoiDensityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Off_HASH) {
    return PoiDensity::Off;
  } else if (hashCode == VerySparse_HASH) {
    return PoiDensity::VerySparse;
  } else if (hashCode == Sparse_HASH) {
    return PoiDensity::Sparse;
  } else if (hashCode == Default_HASH) {
    return PoiDensity::Default;
  } else if (hashCode == Dense_HASH) {
    return PoiDensity::Dense;
  } else if (hashCode == VeryDense_HASH) {
    return PoiDensity::VeryDense;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PoiDensity>(hashCode);
  }

  return PoiDensity::NOT_SET;
}

Aws::String GetNameForPoiDensity(PoiDensity enumValue) {
  switch (enumValue) {
    case PoiDensity::NOT_SET:
      return {};
    case PoiDensity::Off:
      return "Off";
    case PoiDensity::VerySparse:
      return "VerySparse";
    case PoiDensity::Sparse:
      return "Sparse";
    case PoiDensity::Default:
      return "Default";
    case PoiDensity::Dense:
      return "Dense";
    case PoiDensity::VeryDense:
      return "VeryDense";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PoiDensityMapper
}  // namespace Model
}  // namespace GeoMaps
}  // namespace Aws
