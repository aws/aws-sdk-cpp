/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/SegmentSubscriptionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace SegmentSubscriptionStatusMapper {

static const int STARTING_HASH = HashingUtils::HashString("STARTING");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

SegmentSubscriptionStatus GetSegmentSubscriptionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STARTING_HASH) {
    return SegmentSubscriptionStatus::STARTING;
  } else if (hashCode == RUNNING_HASH) {
    return SegmentSubscriptionStatus::RUNNING;
  } else if (hashCode == STOPPED_HASH) {
    return SegmentSubscriptionStatus::STOPPED;
  } else if (hashCode == FAILED_HASH) {
    return SegmentSubscriptionStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SegmentSubscriptionStatus>(hashCode);
  }

  return SegmentSubscriptionStatus::NOT_SET;
}

Aws::String GetNameForSegmentSubscriptionStatus(SegmentSubscriptionStatus enumValue) {
  switch (enumValue) {
    case SegmentSubscriptionStatus::NOT_SET:
      return {};
    case SegmentSubscriptionStatus::STARTING:
      return "STARTING";
    case SegmentSubscriptionStatus::RUNNING:
      return "RUNNING";
    case SegmentSubscriptionStatus::STOPPED:
      return "STOPPED";
    case SegmentSubscriptionStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SegmentSubscriptionStatusMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
