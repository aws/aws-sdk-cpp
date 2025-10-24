/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/CapacityManagerStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace CapacityManagerStatusMapper {

static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");

CapacityManagerStatus GetCapacityManagerStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enabled_HASH) {
    return CapacityManagerStatus::enabled;
  } else if (hashCode == disabled_HASH) {
    return CapacityManagerStatus::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityManagerStatus>(hashCode);
  }

  return CapacityManagerStatus::NOT_SET;
}

Aws::String GetNameForCapacityManagerStatus(CapacityManagerStatus enumValue) {
  switch (enumValue) {
    case CapacityManagerStatus::NOT_SET:
      return {};
    case CapacityManagerStatus::enabled:
      return "enabled";
    case CapacityManagerStatus::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityManagerStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
