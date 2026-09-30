/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/EventSourceState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace EventSourceStateMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

EventSourceState GetEventSourceStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return EventSourceState::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return EventSourceState::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return EventSourceState::UPDATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return EventSourceState::CREATE_FAILED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return EventSourceState::UPDATE_FAILED;
  } else if (hashCode == DELETING_HASH) {
    return EventSourceState::DELETING;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return EventSourceState::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventSourceState>(hashCode);
  }

  return EventSourceState::NOT_SET;
}

Aws::String GetNameForEventSourceState(EventSourceState enumValue) {
  switch (enumValue) {
    case EventSourceState::NOT_SET:
      return {};
    case EventSourceState::CREATING:
      return "CREATING";
    case EventSourceState::ACTIVE:
      return "ACTIVE";
    case EventSourceState::UPDATING:
      return "UPDATING";
    case EventSourceState::CREATE_FAILED:
      return "CREATE_FAILED";
    case EventSourceState::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case EventSourceState::DELETING:
      return "DELETING";
    case EventSourceState::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventSourceStateMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
