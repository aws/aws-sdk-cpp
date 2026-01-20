/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/keyspaces/model/WarmThroughputStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Keyspaces {
namespace Model {
namespace WarmThroughputStatusMapper {

static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");

WarmThroughputStatus GetWarmThroughputStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVAILABLE_HASH) {
    return WarmThroughputStatus::AVAILABLE;
  } else if (hashCode == UPDATING_HASH) {
    return WarmThroughputStatus::UPDATING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WarmThroughputStatus>(hashCode);
  }

  return WarmThroughputStatus::NOT_SET;
}

Aws::String GetNameForWarmThroughputStatus(WarmThroughputStatus enumValue) {
  switch (enumValue) {
    case WarmThroughputStatus::NOT_SET:
      return {};
    case WarmThroughputStatus::AVAILABLE:
      return "AVAILABLE";
    case WarmThroughputStatus::UPDATING:
      return "UPDATING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WarmThroughputStatusMapper
}  // namespace Model
}  // namespace Keyspaces
}  // namespace Aws
