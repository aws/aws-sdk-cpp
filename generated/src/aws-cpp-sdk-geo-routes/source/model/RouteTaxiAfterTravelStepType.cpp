/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTaxiAfterTravelStepType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTaxiAfterTravelStepTypeMapper {

static const int Park_HASH = HashingUtils::HashString("Park");

RouteTaxiAfterTravelStepType GetRouteTaxiAfterTravelStepTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Park_HASH) {
    return RouteTaxiAfterTravelStepType::Park;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTaxiAfterTravelStepType>(hashCode);
  }

  return RouteTaxiAfterTravelStepType::NOT_SET;
}

Aws::String GetNameForRouteTaxiAfterTravelStepType(RouteTaxiAfterTravelStepType enumValue) {
  switch (enumValue) {
    case RouteTaxiAfterTravelStepType::NOT_SET:
      return {};
    case RouteTaxiAfterTravelStepType::Park:
      return "Park";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTaxiAfterTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
