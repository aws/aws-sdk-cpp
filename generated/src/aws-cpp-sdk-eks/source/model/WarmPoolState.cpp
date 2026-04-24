/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/WarmPoolState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace WarmPoolStateMapper {

static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int HIBERNATED_HASH = HashingUtils::HashString("HIBERNATED");

WarmPoolState GetWarmPoolStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STOPPED_HASH) {
    return WarmPoolState::STOPPED;
  } else if (hashCode == RUNNING_HASH) {
    return WarmPoolState::RUNNING;
  } else if (hashCode == HIBERNATED_HASH) {
    return WarmPoolState::HIBERNATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WarmPoolState>(hashCode);
  }

  return WarmPoolState::NOT_SET;
}

Aws::String GetNameForWarmPoolState(WarmPoolState enumValue) {
  switch (enumValue) {
    case WarmPoolState::NOT_SET:
      return {};
    case WarmPoolState::STOPPED:
      return "STOPPED";
    case WarmPoolState::RUNNING:
      return "RUNNING";
    case WarmPoolState::HIBERNATED:
      return "HIBERNATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WarmPoolStateMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
