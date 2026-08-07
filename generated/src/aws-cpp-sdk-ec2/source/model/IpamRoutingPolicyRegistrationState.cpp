/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamRoutingPolicyRegistrationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamRoutingPolicyRegistrationStateMapper {

static const int pending_activate_HASH = HashingUtils::HashString("pending-activate");
static const int activate_failed_HASH = HashingUtils::HashString("activate-failed");
static const int create_in_progress_HASH = HashingUtils::HashString("create-in-progress");
static const int create_complete_HASH = HashingUtils::HashString("create-complete");
static const int update_in_progress_HASH = HashingUtils::HashString("update-in-progress");
static const int update_complete_HASH = HashingUtils::HashString("update-complete");
static const int delete_in_progress_HASH = HashingUtils::HashString("delete-in-progress");
static const int delete_complete_HASH = HashingUtils::HashString("delete-complete");

IpamRoutingPolicyRegistrationState GetIpamRoutingPolicyRegistrationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_activate_HASH) {
    return IpamRoutingPolicyRegistrationState::pending_activate;
  } else if (hashCode == activate_failed_HASH) {
    return IpamRoutingPolicyRegistrationState::activate_failed;
  } else if (hashCode == create_in_progress_HASH) {
    return IpamRoutingPolicyRegistrationState::create_in_progress;
  } else if (hashCode == create_complete_HASH) {
    return IpamRoutingPolicyRegistrationState::create_complete;
  } else if (hashCode == update_in_progress_HASH) {
    return IpamRoutingPolicyRegistrationState::update_in_progress;
  } else if (hashCode == update_complete_HASH) {
    return IpamRoutingPolicyRegistrationState::update_complete;
  } else if (hashCode == delete_in_progress_HASH) {
    return IpamRoutingPolicyRegistrationState::delete_in_progress;
  } else if (hashCode == delete_complete_HASH) {
    return IpamRoutingPolicyRegistrationState::delete_complete;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamRoutingPolicyRegistrationState>(hashCode);
  }

  return IpamRoutingPolicyRegistrationState::NOT_SET;
}

Aws::String GetNameForIpamRoutingPolicyRegistrationState(IpamRoutingPolicyRegistrationState enumValue) {
  switch (enumValue) {
    case IpamRoutingPolicyRegistrationState::NOT_SET:
      return {};
    case IpamRoutingPolicyRegistrationState::pending_activate:
      return "pending-activate";
    case IpamRoutingPolicyRegistrationState::activate_failed:
      return "activate-failed";
    case IpamRoutingPolicyRegistrationState::create_in_progress:
      return "create-in-progress";
    case IpamRoutingPolicyRegistrationState::create_complete:
      return "create-complete";
    case IpamRoutingPolicyRegistrationState::update_in_progress:
      return "update-in-progress";
    case IpamRoutingPolicyRegistrationState::update_complete:
      return "update-complete";
    case IpamRoutingPolicyRegistrationState::delete_in_progress:
      return "delete-in-progress";
    case IpamRoutingPolicyRegistrationState::delete_complete:
      return "delete-complete";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamRoutingPolicyRegistrationStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
