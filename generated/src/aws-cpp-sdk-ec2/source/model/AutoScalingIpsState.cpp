/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/AutoScalingIpsState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace AutoScalingIpsStateMapper {

static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");

AutoScalingIpsState GetAutoScalingIpsStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enabled_HASH) {
    return AutoScalingIpsState::enabled;
  } else if (hashCode == disabled_HASH) {
    return AutoScalingIpsState::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutoScalingIpsState>(hashCode);
  }

  return AutoScalingIpsState::NOT_SET;
}

Aws::String GetNameForAutoScalingIpsState(AutoScalingIpsState enumValue) {
  switch (enumValue) {
    case AutoScalingIpsState::NOT_SET:
      return {};
    case AutoScalingIpsState::enabled:
      return "enabled";
    case AutoScalingIpsState::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutoScalingIpsStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
