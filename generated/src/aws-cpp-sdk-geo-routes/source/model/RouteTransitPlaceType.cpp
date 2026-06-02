/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTransitPlaceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTransitPlaceTypeMapper {

static const int Station_HASH = HashingUtils::HashString("Station");

RouteTransitPlaceType GetRouteTransitPlaceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Station_HASH) {
    return RouteTransitPlaceType::Station;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTransitPlaceType>(hashCode);
  }

  return RouteTransitPlaceType::NOT_SET;
}

Aws::String GetNameForRouteTransitPlaceType(RouteTransitPlaceType enumValue) {
  switch (enumValue) {
    case RouteTransitPlaceType::NOT_SET:
      return {};
    case RouteTransitPlaceType::Station:
      return "Station";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTransitPlaceTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
