/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteWebLinkDeviceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteWebLinkDeviceTypeMapper {

static const int Android_HASH = HashingUtils::HashString("Android");
static const int Ios_HASH = HashingUtils::HashString("Ios");
static const int Web_HASH = HashingUtils::HashString("Web");

RouteWebLinkDeviceType GetRouteWebLinkDeviceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Android_HASH) {
    return RouteWebLinkDeviceType::Android;
  } else if (hashCode == Ios_HASH) {
    return RouteWebLinkDeviceType::Ios;
  } else if (hashCode == Web_HASH) {
    return RouteWebLinkDeviceType::Web;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteWebLinkDeviceType>(hashCode);
  }

  return RouteWebLinkDeviceType::NOT_SET;
}

Aws::String GetNameForRouteWebLinkDeviceType(RouteWebLinkDeviceType enumValue) {
  switch (enumValue) {
    case RouteWebLinkDeviceType::NOT_SET:
      return {};
    case RouteWebLinkDeviceType::Android:
      return "Android";
    case RouteWebLinkDeviceType::Ios:
      return "Ios";
    case RouteWebLinkDeviceType::Web:
      return "Web";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteWebLinkDeviceTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
