/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteResponseNoticeCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteResponseNoticeCodeMapper {

static const int MainLanguageNotFound_HASH = HashingUtils::HashString("MainLanguageNotFound");
static const int Other_HASH = HashingUtils::HashString("Other");
static const int TravelTimeExceedsDriverWorkHours_HASH = HashingUtils::HashString("TravelTimeExceedsDriverWorkHours");
static const int TransitDataUnavailable_HASH = HashingUtils::HashString("TransitDataUnavailable");
static const int TransitRouteUnavailable_HASH = HashingUtils::HashString("TransitRouteUnavailable");
static const int NoTransitStationsFound_HASH = HashingUtils::HashString("NoTransitStationsFound");

RouteResponseNoticeCode GetRouteResponseNoticeCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MainLanguageNotFound_HASH) {
    return RouteResponseNoticeCode::MainLanguageNotFound;
  } else if (hashCode == Other_HASH) {
    return RouteResponseNoticeCode::Other;
  } else if (hashCode == TravelTimeExceedsDriverWorkHours_HASH) {
    return RouteResponseNoticeCode::TravelTimeExceedsDriverWorkHours;
  } else if (hashCode == TransitDataUnavailable_HASH) {
    return RouteResponseNoticeCode::TransitDataUnavailable;
  } else if (hashCode == TransitRouteUnavailable_HASH) {
    return RouteResponseNoticeCode::TransitRouteUnavailable;
  } else if (hashCode == NoTransitStationsFound_HASH) {
    return RouteResponseNoticeCode::NoTransitStationsFound;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteResponseNoticeCode>(hashCode);
  }

  return RouteResponseNoticeCode::NOT_SET;
}

Aws::String GetNameForRouteResponseNoticeCode(RouteResponseNoticeCode enumValue) {
  switch (enumValue) {
    case RouteResponseNoticeCode::NOT_SET:
      return {};
    case RouteResponseNoticeCode::MainLanguageNotFound:
      return "MainLanguageNotFound";
    case RouteResponseNoticeCode::Other:
      return "Other";
    case RouteResponseNoticeCode::TravelTimeExceedsDriverWorkHours:
      return "TravelTimeExceedsDriverWorkHours";
    case RouteResponseNoticeCode::TransitDataUnavailable:
      return "TransitDataUnavailable";
    case RouteResponseNoticeCode::TransitRouteUnavailable:
      return "TransitRouteUnavailable";
    case RouteResponseNoticeCode::NoTransitStationsFound:
      return "NoTransitStationsFound";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteResponseNoticeCodeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
