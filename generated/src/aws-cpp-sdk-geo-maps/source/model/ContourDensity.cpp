/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-maps/model/ContourDensity.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoMaps {
namespace Model {
namespace ContourDensityMapper {

static const int Medium_HASH = HashingUtils::HashString("Medium");

ContourDensity GetContourDensityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Medium_HASH) {
    return ContourDensity::Medium;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContourDensity>(hashCode);
  }

  return ContourDensity::NOT_SET;
}

Aws::String GetNameForContourDensity(ContourDensity enumValue) {
  switch (enumValue) {
    case ContourDensity::NOT_SET:
      return {};
    case ContourDensity::Medium:
      return "Medium";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContourDensityMapper
}  // namespace Model
}  // namespace GeoMaps
}  // namespace Aws
