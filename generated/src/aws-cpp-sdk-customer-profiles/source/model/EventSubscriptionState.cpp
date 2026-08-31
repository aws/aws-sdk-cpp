/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/EventSubscriptionState.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace EventSubscriptionStateMapper {

static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");

EventSubscriptionState GetEventSubscriptionStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RUNNING_HASH) {
    return EventSubscriptionState::RUNNING;
  } else if (hashCode == UNHEALTHY_HASH) {
    return EventSubscriptionState::UNHEALTHY;
  } else if (hashCode == STOPPED_HASH) {
    return EventSubscriptionState::STOPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventSubscriptionState>(hashCode);
  }

  return EventSubscriptionState::NOT_SET;
}

Aws::String GetNameForEventSubscriptionState(EventSubscriptionState enumValue) {
  switch (enumValue) {
    case EventSubscriptionState::NOT_SET:
      return {};
    case EventSubscriptionState::RUNNING:
      return "RUNNING";
    case EventSubscriptionState::UNHEALTHY:
      return "UNHEALTHY";
    case EventSubscriptionState::STOPPED:
      return "STOPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventSubscriptionStateMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
