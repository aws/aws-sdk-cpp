/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteIntermodalEnabledLegs.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteIntermodalEnabledLegsMapper {

static const int FirstLeg_HASH = HashingUtils::HashString("FirstLeg");
static const int LastLeg_HASH = HashingUtils::HashString("LastLeg");
static const int EntireRoute_HASH = HashingUtils::HashString("EntireRoute");
static const int None_HASH = HashingUtils::HashString("None");

RouteIntermodalEnabledLegs GetRouteIntermodalEnabledLegsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FirstLeg_HASH) {
    return RouteIntermodalEnabledLegs::FirstLeg;
  } else if (hashCode == LastLeg_HASH) {
    return RouteIntermodalEnabledLegs::LastLeg;
  } else if (hashCode == EntireRoute_HASH) {
    return RouteIntermodalEnabledLegs::EntireRoute;
  } else if (hashCode == None_HASH) {
    return RouteIntermodalEnabledLegs::None;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteIntermodalEnabledLegs>(hashCode);
  }

  return RouteIntermodalEnabledLegs::NOT_SET;
}

Aws::String GetNameForRouteIntermodalEnabledLegs(RouteIntermodalEnabledLegs enumValue) {
  switch (enumValue) {
    case RouteIntermodalEnabledLegs::NOT_SET:
      return {};
    case RouteIntermodalEnabledLegs::FirstLeg:
      return "FirstLeg";
    case RouteIntermodalEnabledLegs::LastLeg:
      return "LastLeg";
    case RouteIntermodalEnabledLegs::EntireRoute:
      return "EntireRoute";
    case RouteIntermodalEnabledLegs::None:
      return "None";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteIntermodalEnabledLegsMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
