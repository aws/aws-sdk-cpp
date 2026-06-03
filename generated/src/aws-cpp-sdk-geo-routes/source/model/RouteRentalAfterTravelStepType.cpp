/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteRentalAfterTravelStepType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteRentalAfterTravelStepTypeMapper {

static const int Park_HASH = HashingUtils::HashString("Park");

RouteRentalAfterTravelStepType GetRouteRentalAfterTravelStepTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Park_HASH) {
    return RouteRentalAfterTravelStepType::Park;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteRentalAfterTravelStepType>(hashCode);
  }

  return RouteRentalAfterTravelStepType::NOT_SET;
}

Aws::String GetNameForRouteRentalAfterTravelStepType(RouteRentalAfterTravelStepType enumValue) {
  switch (enumValue) {
    case RouteRentalAfterTravelStepType::NOT_SET:
      return {};
    case RouteRentalAfterTravelStepType::Park:
      return "Park";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteRentalAfterTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
