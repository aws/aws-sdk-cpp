/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/AutoProvisionZonesState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace AutoProvisionZonesStateMapper {

static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");

AutoProvisionZonesState GetAutoProvisionZonesStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enabled_HASH) {
    return AutoProvisionZonesState::enabled;
  } else if (hashCode == disabled_HASH) {
    return AutoProvisionZonesState::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutoProvisionZonesState>(hashCode);
  }

  return AutoProvisionZonesState::NOT_SET;
}

Aws::String GetNameForAutoProvisionZonesState(AutoProvisionZonesState enumValue) {
  switch (enumValue) {
    case AutoProvisionZonesState::NOT_SET:
      return {};
    case AutoProvisionZonesState::enabled:
      return "enabled";
    case AutoProvisionZonesState::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutoProvisionZonesStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
