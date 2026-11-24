/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/FirewallOnboardingStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace FirewallOnboardingStatusMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int active_HASH = HashingUtils::HashString("active");
static const int disabling_HASH = HashingUtils::HashString("disabling");

FirewallOnboardingStatus GetFirewallOnboardingStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return FirewallOnboardingStatus::pending;
  } else if (hashCode == active_HASH) {
    return FirewallOnboardingStatus::active;
  } else if (hashCode == disabling_HASH) {
    return FirewallOnboardingStatus::disabling;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FirewallOnboardingStatus>(hashCode);
  }

  return FirewallOnboardingStatus::NOT_SET;
}

Aws::String GetNameForFirewallOnboardingStatus(FirewallOnboardingStatus enumValue) {
  switch (enumValue) {
    case FirewallOnboardingStatus::NOT_SET:
      return {};
    case FirewallOnboardingStatus::pending:
      return "pending";
    case FirewallOnboardingStatus::active:
      return "active";
    case FirewallOnboardingStatus::disabling:
      return "disabling";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FirewallOnboardingStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
