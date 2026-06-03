/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteAccessibilityAttribute.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteAccessibilityAttributeMapper {

static const int Wheelchair_HASH = HashingUtils::HashString("Wheelchair");

RouteAccessibilityAttribute GetRouteAccessibilityAttributeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Wheelchair_HASH) {
    return RouteAccessibilityAttribute::Wheelchair;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteAccessibilityAttribute>(hashCode);
  }

  return RouteAccessibilityAttribute::NOT_SET;
}

Aws::String GetNameForRouteAccessibilityAttribute(RouteAccessibilityAttribute enumValue) {
  switch (enumValue) {
    case RouteAccessibilityAttribute::NOT_SET:
      return {};
    case RouteAccessibilityAttribute::Wheelchair:
      return "Wheelchair";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteAccessibilityAttributeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
