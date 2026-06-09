/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTaxiPlaceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTaxiPlaceTypeMapper {

static const int AccessPoint_HASH = HashingUtils::HashString("AccessPoint");
static const int Station_HASH = HashingUtils::HashString("Station");

RouteTaxiPlaceType GetRouteTaxiPlaceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AccessPoint_HASH) {
    return RouteTaxiPlaceType::AccessPoint;
  } else if (hashCode == Station_HASH) {
    return RouteTaxiPlaceType::Station;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTaxiPlaceType>(hashCode);
  }

  return RouteTaxiPlaceType::NOT_SET;
}

Aws::String GetNameForRouteTaxiPlaceType(RouteTaxiPlaceType enumValue) {
  switch (enumValue) {
    case RouteTaxiPlaceType::NOT_SET:
      return {};
    case RouteTaxiPlaceType::AccessPoint:
      return "AccessPoint";
    case RouteTaxiPlaceType::Station:
      return "Station";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTaxiPlaceTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
