/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/HealthStatusCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BCMDashboards {
namespace Model {
namespace HealthStatusCodeMapper {

static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");

HealthStatusCode GetHealthStatusCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HEALTHY_HASH) {
    return HealthStatusCode::HEALTHY;
  } else if (hashCode == UNHEALTHY_HASH) {
    return HealthStatusCode::UNHEALTHY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HealthStatusCode>(hashCode);
  }

  return HealthStatusCode::NOT_SET;
}

Aws::String GetNameForHealthStatusCode(HealthStatusCode enumValue) {
  switch (enumValue) {
    case HealthStatusCode::NOT_SET:
      return {};
    case HealthStatusCode::HEALTHY:
      return "HEALTHY";
    case HealthStatusCode::UNHEALTHY:
      return "UNHEALTHY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HealthStatusCodeMapper
}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
