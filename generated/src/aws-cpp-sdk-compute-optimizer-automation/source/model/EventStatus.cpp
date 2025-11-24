/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/EventStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace EventStatusMapper {

static const int Ready_HASH = HashingUtils::HashString("Ready");
static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Complete_HASH = HashingUtils::HashString("Complete");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
static const int RollbackReady_HASH = HashingUtils::HashString("RollbackReady");
static const int RollbackInProgress_HASH = HashingUtils::HashString("RollbackInProgress");
static const int RollbackComplete_HASH = HashingUtils::HashString("RollbackComplete");
static const int RollbackFailed_HASH = HashingUtils::HashString("RollbackFailed");

EventStatus GetEventStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Ready_HASH) {
    return EventStatus::Ready;
  } else if (hashCode == InProgress_HASH) {
    return EventStatus::InProgress;
  } else if (hashCode == Complete_HASH) {
    return EventStatus::Complete;
  } else if (hashCode == Failed_HASH) {
    return EventStatus::Failed;
  } else if (hashCode == Cancelled_HASH) {
    return EventStatus::Cancelled;
  } else if (hashCode == RollbackReady_HASH) {
    return EventStatus::RollbackReady;
  } else if (hashCode == RollbackInProgress_HASH) {
    return EventStatus::RollbackInProgress;
  } else if (hashCode == RollbackComplete_HASH) {
    return EventStatus::RollbackComplete;
  } else if (hashCode == RollbackFailed_HASH) {
    return EventStatus::RollbackFailed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventStatus>(hashCode);
  }

  return EventStatus::NOT_SET;
}

Aws::String GetNameForEventStatus(EventStatus enumValue) {
  switch (enumValue) {
    case EventStatus::NOT_SET:
      return {};
    case EventStatus::Ready:
      return "Ready";
    case EventStatus::InProgress:
      return "InProgress";
    case EventStatus::Complete:
      return "Complete";
    case EventStatus::Failed:
      return "Failed";
    case EventStatus::Cancelled:
      return "Cancelled";
    case EventStatus::RollbackReady:
      return "RollbackReady";
    case EventStatus::RollbackInProgress:
      return "RollbackInProgress";
    case EventStatus::RollbackComplete:
      return "RollbackComplete";
    case EventStatus::RollbackFailed:
      return "RollbackFailed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventStatusMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
