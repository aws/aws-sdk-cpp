﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/RouteOrigin.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace RouteOriginMapper {

static const int CreateRouteTable_HASH = HashingUtils::HashString("CreateRouteTable");
static const int CreateRoute_HASH = HashingUtils::HashString("CreateRoute");
static const int EnableVgwRoutePropagation_HASH = HashingUtils::HashString("EnableVgwRoutePropagation");
static const int Advertisement_HASH = HashingUtils::HashString("Advertisement");

RouteOrigin GetRouteOriginForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CreateRouteTable_HASH) {
    return RouteOrigin::CreateRouteTable;
  } else if (hashCode == CreateRoute_HASH) {
    return RouteOrigin::CreateRoute;
  } else if (hashCode == EnableVgwRoutePropagation_HASH) {
    return RouteOrigin::EnableVgwRoutePropagation;
  } else if (hashCode == Advertisement_HASH) {
    return RouteOrigin::Advertisement;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteOrigin>(hashCode);
  }

  return RouteOrigin::NOT_SET;
}

Aws::String GetNameForRouteOrigin(RouteOrigin enumValue) {
  switch (enumValue) {
    case RouteOrigin::NOT_SET:
      return {};
    case RouteOrigin::CreateRouteTable:
      return "CreateRouteTable";
    case RouteOrigin::CreateRoute:
      return "CreateRoute";
    case RouteOrigin::EnableVgwRoutePropagation:
      return "EnableVgwRoutePropagation";
    case RouteOrigin::Advertisement:
      return "Advertisement";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteOriginMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
