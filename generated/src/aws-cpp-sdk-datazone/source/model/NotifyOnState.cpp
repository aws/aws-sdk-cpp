/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/NotifyOnState.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace NotifyOnStateMapper {

static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
static const int STARTING_HASH = HashingUtils::HashString("STARTING");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");

NotifyOnState GetNotifyOnStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUCCEEDED_HASH) {
    return NotifyOnState::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return NotifyOnState::FAILED;
  } else if (hashCode == STOPPED_HASH) {
    return NotifyOnState::STOPPED;
  } else if (hashCode == QUEUED_HASH) {
    return NotifyOnState::QUEUED;
  } else if (hashCode == STARTING_HASH) {
    return NotifyOnState::STARTING;
  } else if (hashCode == RUNNING_HASH) {
    return NotifyOnState::RUNNING;
  } else if (hashCode == STOPPING_HASH) {
    return NotifyOnState::STOPPING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotifyOnState>(hashCode);
  }

  return NotifyOnState::NOT_SET;
}

Aws::String GetNameForNotifyOnState(NotifyOnState enumValue) {
  switch (enumValue) {
    case NotifyOnState::NOT_SET:
      return {};
    case NotifyOnState::SUCCEEDED:
      return "SUCCEEDED";
    case NotifyOnState::FAILED:
      return "FAILED";
    case NotifyOnState::STOPPED:
      return "STOPPED";
    case NotifyOnState::QUEUED:
      return "QUEUED";
    case NotifyOnState::STARTING:
      return "STARTING";
    case NotifyOnState::RUNNING:
      return "RUNNING";
    case NotifyOnState::STOPPING:
      return "STOPPING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotifyOnStateMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
