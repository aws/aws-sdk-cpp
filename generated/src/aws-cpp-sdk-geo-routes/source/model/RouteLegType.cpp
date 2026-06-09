/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteLegType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteLegTypeMapper {

static const int Ferry_HASH = HashingUtils::HashString("Ferry");
static const int Pedestrian_HASH = HashingUtils::HashString("Pedestrian");
static const int Vehicle_HASH = HashingUtils::HashString("Vehicle");
static const int Rental_HASH = HashingUtils::HashString("Rental");
static const int Taxi_HASH = HashingUtils::HashString("Taxi");
static const int Transit_HASH = HashingUtils::HashString("Transit");

RouteLegType GetRouteLegTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Ferry_HASH) {
    return RouteLegType::Ferry;
  } else if (hashCode == Pedestrian_HASH) {
    return RouteLegType::Pedestrian;
  } else if (hashCode == Vehicle_HASH) {
    return RouteLegType::Vehicle;
  } else if (hashCode == Rental_HASH) {
    return RouteLegType::Rental;
  } else if (hashCode == Taxi_HASH) {
    return RouteLegType::Taxi;
  } else if (hashCode == Transit_HASH) {
    return RouteLegType::Transit;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteLegType>(hashCode);
  }

  return RouteLegType::NOT_SET;
}

Aws::String GetNameForRouteLegType(RouteLegType enumValue) {
  switch (enumValue) {
    case RouteLegType::NOT_SET:
      return {};
    case RouteLegType::Ferry:
      return "Ferry";
    case RouteLegType::Pedestrian:
      return "Pedestrian";
    case RouteLegType::Vehicle:
      return "Vehicle";
    case RouteLegType::Rental:
      return "Rental";
    case RouteLegType::Taxi:
      return "Taxi";
    case RouteLegType::Transit:
      return "Transit";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteLegTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
