/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/model/AccessPointType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {
namespace AccessPointTypeMapper {

static const int Delivery_HASH = HashingUtils::HashString("Delivery");
static const int Emergency_HASH = HashingUtils::HashString("Emergency");
static const int Entrance_HASH = HashingUtils::HashString("Entrance");
static const int Loading_HASH = HashingUtils::HashString("Loading");
static const int Other_HASH = HashingUtils::HashString("Other");
static const int Parking_HASH = HashingUtils::HashString("Parking");
static const int Taxi_HASH = HashingUtils::HashString("Taxi");

AccessPointType GetAccessPointTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Delivery_HASH) {
    return AccessPointType::Delivery;
  } else if (hashCode == Emergency_HASH) {
    return AccessPointType::Emergency;
  } else if (hashCode == Entrance_HASH) {
    return AccessPointType::Entrance;
  } else if (hashCode == Loading_HASH) {
    return AccessPointType::Loading;
  } else if (hashCode == Other_HASH) {
    return AccessPointType::Other;
  } else if (hashCode == Parking_HASH) {
    return AccessPointType::Parking;
  } else if (hashCode == Taxi_HASH) {
    return AccessPointType::Taxi;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessPointType>(hashCode);
  }

  return AccessPointType::NOT_SET;
}

Aws::String GetNameForAccessPointType(AccessPointType enumValue) {
  switch (enumValue) {
    case AccessPointType::NOT_SET:
      return {};
    case AccessPointType::Delivery:
      return "Delivery";
    case AccessPointType::Emergency:
      return "Emergency";
    case AccessPointType::Entrance:
      return "Entrance";
    case AccessPointType::Loading:
      return "Loading";
    case AccessPointType::Other:
      return "Other";
    case AccessPointType::Parking:
      return "Parking";
    case AccessPointType::Taxi:
      return "Taxi";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessPointTypeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
