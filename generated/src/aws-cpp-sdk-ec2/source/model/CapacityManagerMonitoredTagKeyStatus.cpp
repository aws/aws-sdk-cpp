/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/CapacityManagerMonitoredTagKeyStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace CapacityManagerMonitoredTagKeyStatusMapper {

static const int activating_HASH = HashingUtils::HashString("activating");
static const int activated_HASH = HashingUtils::HashString("activated");
static const int deactivating_HASH = HashingUtils::HashString("deactivating");
static const int suspended_HASH = HashingUtils::HashString("suspended");

CapacityManagerMonitoredTagKeyStatus GetCapacityManagerMonitoredTagKeyStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == activating_HASH) {
    return CapacityManagerMonitoredTagKeyStatus::activating;
  } else if (hashCode == activated_HASH) {
    return CapacityManagerMonitoredTagKeyStatus::activated;
  } else if (hashCode == deactivating_HASH) {
    return CapacityManagerMonitoredTagKeyStatus::deactivating;
  } else if (hashCode == suspended_HASH) {
    return CapacityManagerMonitoredTagKeyStatus::suspended;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityManagerMonitoredTagKeyStatus>(hashCode);
  }

  return CapacityManagerMonitoredTagKeyStatus::NOT_SET;
}

Aws::String GetNameForCapacityManagerMonitoredTagKeyStatus(CapacityManagerMonitoredTagKeyStatus enumValue) {
  switch (enumValue) {
    case CapacityManagerMonitoredTagKeyStatus::NOT_SET:
      return {};
    case CapacityManagerMonitoredTagKeyStatus::activating:
      return "activating";
    case CapacityManagerMonitoredTagKeyStatus::activated:
      return "activated";
    case CapacityManagerMonitoredTagKeyStatus::deactivating:
      return "deactivating";
    case CapacityManagerMonitoredTagKeyStatus::suspended:
      return "suspended";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityManagerMonitoredTagKeyStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
