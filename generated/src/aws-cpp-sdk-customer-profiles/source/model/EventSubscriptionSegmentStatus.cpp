/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/EventSubscriptionSegmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace EventSubscriptionSegmentStatusMapper {

static const int STARTING_HASH = HashingUtils::HashString("STARTING");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

EventSubscriptionSegmentStatus GetEventSubscriptionSegmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STARTING_HASH) {
    return EventSubscriptionSegmentStatus::STARTING;
  } else if (hashCode == RUNNING_HASH) {
    return EventSubscriptionSegmentStatus::RUNNING;
  } else if (hashCode == STOPPED_HASH) {
    return EventSubscriptionSegmentStatus::STOPPED;
  } else if (hashCode == FAILED_HASH) {
    return EventSubscriptionSegmentStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventSubscriptionSegmentStatus>(hashCode);
  }

  return EventSubscriptionSegmentStatus::NOT_SET;
}

Aws::String GetNameForEventSubscriptionSegmentStatus(EventSubscriptionSegmentStatus enumValue) {
  switch (enumValue) {
    case EventSubscriptionSegmentStatus::NOT_SET:
      return {};
    case EventSubscriptionSegmentStatus::STARTING:
      return "STARTING";
    case EventSubscriptionSegmentStatus::RUNNING:
      return "RUNNING";
    case EventSubscriptionSegmentStatus::STOPPED:
      return "STOPPED";
    case EventSubscriptionSegmentStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventSubscriptionSegmentStatusMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
