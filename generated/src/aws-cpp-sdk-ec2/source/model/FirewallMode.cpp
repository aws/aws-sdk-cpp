/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/FirewallMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace FirewallModeMapper {

static const int monitor_HASH = HashingUtils::HashString("monitor");
static const int enforce_HASH = HashingUtils::HashString("enforce");

FirewallMode GetFirewallModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == monitor_HASH) {
    return FirewallMode::monitor;
  } else if (hashCode == enforce_HASH) {
    return FirewallMode::enforce;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FirewallMode>(hashCode);
  }

  return FirewallMode::NOT_SET;
}

Aws::String GetNameForFirewallMode(FirewallMode enumValue) {
  switch (enumValue) {
    case FirewallMode::NOT_SET:
      return {};
    case FirewallMode::monitor:
      return "monitor";
    case FirewallMode::enforce:
      return "enforce";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FirewallModeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
