/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTaxiNoticeCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTaxiNoticeCodeMapper {

static const int AccuratePolylineUnavailable_HASH = HashingUtils::HashString("AccuratePolylineUnavailable");
static const int Other_HASH = HashingUtils::HashString("Other");

RouteTaxiNoticeCode GetRouteTaxiNoticeCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AccuratePolylineUnavailable_HASH) {
    return RouteTaxiNoticeCode::AccuratePolylineUnavailable;
  } else if (hashCode == Other_HASH) {
    return RouteTaxiNoticeCode::Other;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTaxiNoticeCode>(hashCode);
  }

  return RouteTaxiNoticeCode::NOT_SET;
}

Aws::String GetNameForRouteTaxiNoticeCode(RouteTaxiNoticeCode enumValue) {
  switch (enumValue) {
    case RouteTaxiNoticeCode::NOT_SET:
      return {};
    case RouteTaxiNoticeCode::AccuratePolylineUnavailable:
      return "AccuratePolylineUnavailable";
    case RouteTaxiNoticeCode::Other:
      return "Other";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTaxiNoticeCodeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
