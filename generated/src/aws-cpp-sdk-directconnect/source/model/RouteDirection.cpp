/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/directconnect/model/RouteDirection.h>

using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {
namespace RouteDirectionMapper {

static const int accepted_HASH = HashingUtils::HashString("accepted");
static const int advertised_HASH = HashingUtils::HashString("advertised");

RouteDirection GetRouteDirectionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == accepted_HASH) {
    return RouteDirection::accepted;
  } else if (hashCode == advertised_HASH) {
    return RouteDirection::advertised;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteDirection>(hashCode);
  }

  return RouteDirection::NOT_SET;
}

Aws::String GetNameForRouteDirection(RouteDirection enumValue) {
  switch (enumValue) {
    case RouteDirection::NOT_SET:
      return {};
    case RouteDirection::accepted:
      return "accepted";
    case RouteDirection::advertised:
      return "advertised";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteDirectionMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
