/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamInternetRegistryAssociationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamInternetRegistryAssociationStateMapper {

static const int pending_enable_HASH = HashingUtils::HashString("pending-enable");
static const int create_in_progress_HASH = HashingUtils::HashString("create-in-progress");
static const int create_failed_HASH = HashingUtils::HashString("create-failed");
static const int enable_in_progress_HASH = HashingUtils::HashString("enable-in-progress");
static const int enable_complete_HASH = HashingUtils::HashString("enable-complete");
static const int enable_failed_HASH = HashingUtils::HashString("enable-failed");
static const int delete_in_progress_HASH = HashingUtils::HashString("delete-in-progress");
static const int delete_complete_HASH = HashingUtils::HashString("delete-complete");
static const int delete_failed_HASH = HashingUtils::HashString("delete-failed");

IpamInternetRegistryAssociationState GetIpamInternetRegistryAssociationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_enable_HASH) {
    return IpamInternetRegistryAssociationState::pending_enable;
  } else if (hashCode == create_in_progress_HASH) {
    return IpamInternetRegistryAssociationState::create_in_progress;
  } else if (hashCode == create_failed_HASH) {
    return IpamInternetRegistryAssociationState::create_failed;
  } else if (hashCode == enable_in_progress_HASH) {
    return IpamInternetRegistryAssociationState::enable_in_progress;
  } else if (hashCode == enable_complete_HASH) {
    return IpamInternetRegistryAssociationState::enable_complete;
  } else if (hashCode == enable_failed_HASH) {
    return IpamInternetRegistryAssociationState::enable_failed;
  } else if (hashCode == delete_in_progress_HASH) {
    return IpamInternetRegistryAssociationState::delete_in_progress;
  } else if (hashCode == delete_complete_HASH) {
    return IpamInternetRegistryAssociationState::delete_complete;
  } else if (hashCode == delete_failed_HASH) {
    return IpamInternetRegistryAssociationState::delete_failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamInternetRegistryAssociationState>(hashCode);
  }

  return IpamInternetRegistryAssociationState::NOT_SET;
}

Aws::String GetNameForIpamInternetRegistryAssociationState(IpamInternetRegistryAssociationState enumValue) {
  switch (enumValue) {
    case IpamInternetRegistryAssociationState::NOT_SET:
      return {};
    case IpamInternetRegistryAssociationState::pending_enable:
      return "pending-enable";
    case IpamInternetRegistryAssociationState::create_in_progress:
      return "create-in-progress";
    case IpamInternetRegistryAssociationState::create_failed:
      return "create-failed";
    case IpamInternetRegistryAssociationState::enable_in_progress:
      return "enable-in-progress";
    case IpamInternetRegistryAssociationState::enable_complete:
      return "enable-complete";
    case IpamInternetRegistryAssociationState::enable_failed:
      return "enable-failed";
    case IpamInternetRegistryAssociationState::delete_in_progress:
      return "delete-in-progress";
    case IpamInternetRegistryAssociationState::delete_complete:
      return "delete-complete";
    case IpamInternetRegistryAssociationState::delete_failed:
      return "delete-failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamInternetRegistryAssociationStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
