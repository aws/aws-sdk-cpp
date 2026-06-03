/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteRentalBeforeTravelStepType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteRentalBeforeTravelStepTypeMapper {

static const int Setup_HASH = HashingUtils::HashString("Setup");

RouteRentalBeforeTravelStepType GetRouteRentalBeforeTravelStepTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Setup_HASH) {
    return RouteRentalBeforeTravelStepType::Setup;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteRentalBeforeTravelStepType>(hashCode);
  }

  return RouteRentalBeforeTravelStepType::NOT_SET;
}

Aws::String GetNameForRouteRentalBeforeTravelStepType(RouteRentalBeforeTravelStepType enumValue) {
  switch (enumValue) {
    case RouteRentalBeforeTravelStepType::NOT_SET:
      return {};
    case RouteRentalBeforeTravelStepType::Setup:
      return "Setup";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteRentalBeforeTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
