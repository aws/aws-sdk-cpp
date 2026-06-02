/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RoutePedestrianAfterTravelStepType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RoutePedestrianAfterTravelStepTypeMapper {

static const int Wait_HASH = HashingUtils::HashString("Wait");

RoutePedestrianAfterTravelStepType GetRoutePedestrianAfterTravelStepTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Wait_HASH) {
    return RoutePedestrianAfterTravelStepType::Wait;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RoutePedestrianAfterTravelStepType>(hashCode);
  }

  return RoutePedestrianAfterTravelStepType::NOT_SET;
}

Aws::String GetNameForRoutePedestrianAfterTravelStepType(RoutePedestrianAfterTravelStepType enumValue) {
  switch (enumValue) {
    case RoutePedestrianAfterTravelStepType::NOT_SET:
      return {};
    case RoutePedestrianAfterTravelStepType::Wait:
      return "Wait";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RoutePedestrianAfterTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
