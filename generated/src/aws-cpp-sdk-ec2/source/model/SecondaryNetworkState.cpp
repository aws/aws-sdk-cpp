/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/SecondaryNetworkState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace SecondaryNetworkStateMapper {

static const int create_in_progress_HASH = HashingUtils::HashString("create-in-progress");
static const int create_complete_HASH = HashingUtils::HashString("create-complete");
static const int create_failed_HASH = HashingUtils::HashString("create-failed");
static const int delete_in_progress_HASH = HashingUtils::HashString("delete-in-progress");
static const int delete_complete_HASH = HashingUtils::HashString("delete-complete");
static const int delete_failed_HASH = HashingUtils::HashString("delete-failed");

SecondaryNetworkState GetSecondaryNetworkStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == create_in_progress_HASH) {
    return SecondaryNetworkState::create_in_progress;
  } else if (hashCode == create_complete_HASH) {
    return SecondaryNetworkState::create_complete;
  } else if (hashCode == create_failed_HASH) {
    return SecondaryNetworkState::create_failed;
  } else if (hashCode == delete_in_progress_HASH) {
    return SecondaryNetworkState::delete_in_progress;
  } else if (hashCode == delete_complete_HASH) {
    return SecondaryNetworkState::delete_complete;
  } else if (hashCode == delete_failed_HASH) {
    return SecondaryNetworkState::delete_failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecondaryNetworkState>(hashCode);
  }

  return SecondaryNetworkState::NOT_SET;
}

Aws::String GetNameForSecondaryNetworkState(SecondaryNetworkState enumValue) {
  switch (enumValue) {
    case SecondaryNetworkState::NOT_SET:
      return {};
    case SecondaryNetworkState::create_in_progress:
      return "create-in-progress";
    case SecondaryNetworkState::create_complete:
      return "create-complete";
    case SecondaryNetworkState::create_failed:
      return "create-failed";
    case SecondaryNetworkState::delete_in_progress:
      return "delete-in-progress";
    case SecondaryNetworkState::delete_complete:
      return "delete-complete";
    case SecondaryNetworkState::delete_failed:
      return "delete-failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecondaryNetworkStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
