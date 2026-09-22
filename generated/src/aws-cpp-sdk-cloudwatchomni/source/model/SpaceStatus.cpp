/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/SpaceStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace SpaceStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
static const int MOVING_HASH = HashingUtils::HashString("MOVING");

SpaceStatus GetSpaceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return SpaceStatus::ACTIVE;
  } else if (hashCode == SUSPENDED_HASH) {
    return SpaceStatus::SUSPENDED;
  } else if (hashCode == MOVING_HASH) {
    return SpaceStatus::MOVING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SpaceStatus>(hashCode);
  }

  return SpaceStatus::NOT_SET;
}

Aws::String GetNameForSpaceStatus(SpaceStatus enumValue) {
  switch (enumValue) {
    case SpaceStatus::NOT_SET:
      return {};
    case SpaceStatus::ACTIVE:
      return "ACTIVE";
    case SpaceStatus::SUSPENDED:
      return "SUSPENDED";
    case SpaceStatus::MOVING:
      return "MOVING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpaceStatusMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
