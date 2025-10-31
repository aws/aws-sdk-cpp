/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamPrefixListResolverState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamPrefixListResolverStateMapper {

static const int create_in_progress_HASH = HashingUtils::HashString("create-in-progress");
static const int create_complete_HASH = HashingUtils::HashString("create-complete");
static const int create_failed_HASH = HashingUtils::HashString("create-failed");
static const int modify_in_progress_HASH = HashingUtils::HashString("modify-in-progress");
static const int modify_complete_HASH = HashingUtils::HashString("modify-complete");
static const int modify_failed_HASH = HashingUtils::HashString("modify-failed");
static const int delete_in_progress_HASH = HashingUtils::HashString("delete-in-progress");
static const int delete_complete_HASH = HashingUtils::HashString("delete-complete");
static const int delete_failed_HASH = HashingUtils::HashString("delete-failed");
static const int isolate_in_progress_HASH = HashingUtils::HashString("isolate-in-progress");
static const int isolate_complete_HASH = HashingUtils::HashString("isolate-complete");
static const int restore_in_progress_HASH = HashingUtils::HashString("restore-in-progress");

IpamPrefixListResolverState GetIpamPrefixListResolverStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == create_in_progress_HASH) {
    return IpamPrefixListResolverState::create_in_progress;
  } else if (hashCode == create_complete_HASH) {
    return IpamPrefixListResolverState::create_complete;
  } else if (hashCode == create_failed_HASH) {
    return IpamPrefixListResolverState::create_failed;
  } else if (hashCode == modify_in_progress_HASH) {
    return IpamPrefixListResolverState::modify_in_progress;
  } else if (hashCode == modify_complete_HASH) {
    return IpamPrefixListResolverState::modify_complete;
  } else if (hashCode == modify_failed_HASH) {
    return IpamPrefixListResolverState::modify_failed;
  } else if (hashCode == delete_in_progress_HASH) {
    return IpamPrefixListResolverState::delete_in_progress;
  } else if (hashCode == delete_complete_HASH) {
    return IpamPrefixListResolverState::delete_complete;
  } else if (hashCode == delete_failed_HASH) {
    return IpamPrefixListResolverState::delete_failed;
  } else if (hashCode == isolate_in_progress_HASH) {
    return IpamPrefixListResolverState::isolate_in_progress;
  } else if (hashCode == isolate_complete_HASH) {
    return IpamPrefixListResolverState::isolate_complete;
  } else if (hashCode == restore_in_progress_HASH) {
    return IpamPrefixListResolverState::restore_in_progress;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamPrefixListResolverState>(hashCode);
  }

  return IpamPrefixListResolverState::NOT_SET;
}

Aws::String GetNameForIpamPrefixListResolverState(IpamPrefixListResolverState enumValue) {
  switch (enumValue) {
    case IpamPrefixListResolverState::NOT_SET:
      return {};
    case IpamPrefixListResolverState::create_in_progress:
      return "create-in-progress";
    case IpamPrefixListResolverState::create_complete:
      return "create-complete";
    case IpamPrefixListResolverState::create_failed:
      return "create-failed";
    case IpamPrefixListResolverState::modify_in_progress:
      return "modify-in-progress";
    case IpamPrefixListResolverState::modify_complete:
      return "modify-complete";
    case IpamPrefixListResolverState::modify_failed:
      return "modify-failed";
    case IpamPrefixListResolverState::delete_in_progress:
      return "delete-in-progress";
    case IpamPrefixListResolverState::delete_complete:
      return "delete-complete";
    case IpamPrefixListResolverState::delete_failed:
      return "delete-failed";
    case IpamPrefixListResolverState::isolate_in_progress:
      return "isolate-in-progress";
    case IpamPrefixListResolverState::isolate_complete:
      return "isolate-complete";
    case IpamPrefixListResolverState::restore_in_progress:
      return "restore-in-progress";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamPrefixListResolverStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
