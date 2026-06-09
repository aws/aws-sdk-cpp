/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteAttributionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteAttributionTypeMapper {

static const int Disclaimer_HASH = HashingUtils::HashString("Disclaimer");
static const int Tariff_HASH = HashingUtils::HashString("Tariff");

RouteAttributionType GetRouteAttributionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Disclaimer_HASH) {
    return RouteAttributionType::Disclaimer;
  } else if (hashCode == Tariff_HASH) {
    return RouteAttributionType::Tariff;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteAttributionType>(hashCode);
  }

  return RouteAttributionType::NOT_SET;
}

Aws::String GetNameForRouteAttributionType(RouteAttributionType enumValue) {
  switch (enumValue) {
    case RouteAttributionType::NOT_SET:
      return {};
    case RouteAttributionType::Disclaimer:
      return "Disclaimer";
    case RouteAttributionType::Tariff:
      return "Tariff";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteAttributionTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
