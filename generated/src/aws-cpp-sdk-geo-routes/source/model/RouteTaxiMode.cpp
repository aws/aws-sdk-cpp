/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTaxiMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTaxiModeMapper {

static const int All_HASH = HashingUtils::HashString("All");
static const int Car_HASH = HashingUtils::HashString("Car");

RouteTaxiMode GetRouteTaxiModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == All_HASH) {
    return RouteTaxiMode::All;
  } else if (hashCode == Car_HASH) {
    return RouteTaxiMode::Car;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTaxiMode>(hashCode);
  }

  return RouteTaxiMode::NOT_SET;
}

Aws::String GetNameForRouteTaxiMode(RouteTaxiMode enumValue) {
  switch (enumValue) {
    case RouteTaxiMode::NOT_SET:
      return {};
    case RouteTaxiMode::All:
      return "All";
    case RouteTaxiMode::Car:
      return "Car";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTaxiModeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
