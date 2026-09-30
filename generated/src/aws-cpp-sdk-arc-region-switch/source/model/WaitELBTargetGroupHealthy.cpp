/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/WaitELBTargetGroupHealthy.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
namespace WaitELBTargetGroupHealthyMapper {

static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");

WaitELBTargetGroupHealthy GetWaitELBTargetGroupHealthyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enabled_HASH) {
    return WaitELBTargetGroupHealthy::enabled;
  } else if (hashCode == disabled_HASH) {
    return WaitELBTargetGroupHealthy::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WaitELBTargetGroupHealthy>(hashCode);
  }

  return WaitELBTargetGroupHealthy::NOT_SET;
}

Aws::String GetNameForWaitELBTargetGroupHealthy(WaitELBTargetGroupHealthy enumValue) {
  switch (enumValue) {
    case WaitELBTargetGroupHealthy::NOT_SET:
      return {};
    case WaitELBTargetGroupHealthy::enabled:
      return "enabled";
    case WaitELBTargetGroupHealthy::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WaitELBTargetGroupHealthyMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
