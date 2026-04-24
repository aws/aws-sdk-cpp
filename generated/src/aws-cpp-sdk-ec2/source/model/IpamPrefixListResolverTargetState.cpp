/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamPrefixListResolverTargetState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamPrefixListResolverTargetStateMapper {

static const int create_in_progress_HASH = HashingUtils::HashString("create-in-progress");
static const int create_complete_HASH = HashingUtils::HashString("create-complete");
static const int create_failed_HASH = HashingUtils::HashString("create-failed");
static const int modify_in_progress_HASH = HashingUtils::HashString("modify-in-progress");
static const int modify_complete_HASH = HashingUtils::HashString("modify-complete");
static const int modify_failed_HASH = HashingUtils::HashString("modify-failed");
static const int sync_in_progress_HASH = HashingUtils::HashString("sync-in-progress");
static const int sync_complete_HASH = HashingUtils::HashString("sync-complete");
static const int sync_failed_HASH = HashingUtils::HashString("sync-failed");
static const int delete_in_progress_HASH = HashingUtils::HashString("delete-in-progress");
static const int delete_complete_HASH = HashingUtils::HashString("delete-complete");
static const int delete_failed_HASH = HashingUtils::HashString("delete-failed");
static const int isolate_in_progress_HASH = HashingUtils::HashString("isolate-in-progress");
static const int isolate_complete_HASH = HashingUtils::HashString("isolate-complete");
static const int restore_in_progress_HASH = HashingUtils::HashString("restore-in-progress");

IpamPrefixListResolverTargetState GetIpamPrefixListResolverTargetStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == create_in_progress_HASH) {
    return IpamPrefixListResolverTargetState::create_in_progress;
  } else if (hashCode == create_complete_HASH) {
    return IpamPrefixListResolverTargetState::create_complete;
  } else if (hashCode == create_failed_HASH) {
    return IpamPrefixListResolverTargetState::create_failed;
  } else if (hashCode == modify_in_progress_HASH) {
    return IpamPrefixListResolverTargetState::modify_in_progress;
  } else if (hashCode == modify_complete_HASH) {
    return IpamPrefixListResolverTargetState::modify_complete;
  } else if (hashCode == modify_failed_HASH) {
    return IpamPrefixListResolverTargetState::modify_failed;
  } else if (hashCode == sync_in_progress_HASH) {
    return IpamPrefixListResolverTargetState::sync_in_progress;
  } else if (hashCode == sync_complete_HASH) {
    return IpamPrefixListResolverTargetState::sync_complete;
  } else if (hashCode == sync_failed_HASH) {
    return IpamPrefixListResolverTargetState::sync_failed;
  } else if (hashCode == delete_in_progress_HASH) {
    return IpamPrefixListResolverTargetState::delete_in_progress;
  } else if (hashCode == delete_complete_HASH) {
    return IpamPrefixListResolverTargetState::delete_complete;
  } else if (hashCode == delete_failed_HASH) {
    return IpamPrefixListResolverTargetState::delete_failed;
  } else if (hashCode == isolate_in_progress_HASH) {
    return IpamPrefixListResolverTargetState::isolate_in_progress;
  } else if (hashCode == isolate_complete_HASH) {
    return IpamPrefixListResolverTargetState::isolate_complete;
  } else if (hashCode == restore_in_progress_HASH) {
    return IpamPrefixListResolverTargetState::restore_in_progress;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamPrefixListResolverTargetState>(hashCode);
  }

  return IpamPrefixListResolverTargetState::NOT_SET;
}

Aws::String GetNameForIpamPrefixListResolverTargetState(IpamPrefixListResolverTargetState enumValue) {
  switch (enumValue) {
    case IpamPrefixListResolverTargetState::NOT_SET:
      return {};
    case IpamPrefixListResolverTargetState::create_in_progress:
      return "create-in-progress";
    case IpamPrefixListResolverTargetState::create_complete:
      return "create-complete";
    case IpamPrefixListResolverTargetState::create_failed:
      return "create-failed";
    case IpamPrefixListResolverTargetState::modify_in_progress:
      return "modify-in-progress";
    case IpamPrefixListResolverTargetState::modify_complete:
      return "modify-complete";
    case IpamPrefixListResolverTargetState::modify_failed:
      return "modify-failed";
    case IpamPrefixListResolverTargetState::sync_in_progress:
      return "sync-in-progress";
    case IpamPrefixListResolverTargetState::sync_complete:
      return "sync-complete";
    case IpamPrefixListResolverTargetState::sync_failed:
      return "sync-failed";
    case IpamPrefixListResolverTargetState::delete_in_progress:
      return "delete-in-progress";
    case IpamPrefixListResolverTargetState::delete_complete:
      return "delete-complete";
    case IpamPrefixListResolverTargetState::delete_failed:
      return "delete-failed";
    case IpamPrefixListResolverTargetState::isolate_in_progress:
      return "isolate-in-progress";
    case IpamPrefixListResolverTargetState::isolate_complete:
      return "isolate-complete";
    case IpamPrefixListResolverTargetState::restore_in_progress:
      return "restore-in-progress";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamPrefixListResolverTargetStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
