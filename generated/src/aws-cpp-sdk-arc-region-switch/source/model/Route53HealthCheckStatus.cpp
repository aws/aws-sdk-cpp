/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/Route53HealthCheckStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
namespace Route53HealthCheckStatusMapper {

static const int healthy_HASH = HashingUtils::HashString("healthy");
static const int unhealthy_HASH = HashingUtils::HashString("unhealthy");
static const int unknown_HASH = HashingUtils::HashString("unknown");

Route53HealthCheckStatus GetRoute53HealthCheckStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == healthy_HASH) {
    return Route53HealthCheckStatus::healthy;
  } else if (hashCode == unhealthy_HASH) {
    return Route53HealthCheckStatus::unhealthy;
  } else if (hashCode == unknown_HASH) {
    return Route53HealthCheckStatus::unknown;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Route53HealthCheckStatus>(hashCode);
  }

  return Route53HealthCheckStatus::NOT_SET;
}

Aws::String GetNameForRoute53HealthCheckStatus(Route53HealthCheckStatus enumValue) {
  switch (enumValue) {
    case Route53HealthCheckStatus::NOT_SET:
      return {};
    case Route53HealthCheckStatus::healthy:
      return "healthy";
    case Route53HealthCheckStatus::unhealthy:
      return "unhealthy";
    case Route53HealthCheckStatus::unknown:
      return "unknown";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace Route53HealthCheckStatusMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
