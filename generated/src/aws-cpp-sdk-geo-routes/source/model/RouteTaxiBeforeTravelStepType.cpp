/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTaxiBeforeTravelStepType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTaxiBeforeTravelStepTypeMapper {

static const int Wait_HASH = HashingUtils::HashString("Wait");

RouteTaxiBeforeTravelStepType GetRouteTaxiBeforeTravelStepTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Wait_HASH) {
    return RouteTaxiBeforeTravelStepType::Wait;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTaxiBeforeTravelStepType>(hashCode);
  }

  return RouteTaxiBeforeTravelStepType::NOT_SET;
}

Aws::String GetNameForRouteTaxiBeforeTravelStepType(RouteTaxiBeforeTravelStepType enumValue) {
  switch (enumValue) {
    case RouteTaxiBeforeTravelStepType::NOT_SET:
      return {};
    case RouteTaxiBeforeTravelStepType::Wait:
      return "Wait";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTaxiBeforeTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
