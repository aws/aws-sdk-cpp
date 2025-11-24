/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/EventType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace EventTypeMapper {

static const int SnapshotAndDeleteUnattachedEbsVolume_HASH = HashingUtils::HashString("SnapshotAndDeleteUnattachedEbsVolume");
static const int UpgradeEbsVolumeType_HASH = HashingUtils::HashString("UpgradeEbsVolumeType");

EventType GetEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SnapshotAndDeleteUnattachedEbsVolume_HASH) {
    return EventType::SnapshotAndDeleteUnattachedEbsVolume;
  } else if (hashCode == UpgradeEbsVolumeType_HASH) {
    return EventType::UpgradeEbsVolumeType;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventType>(hashCode);
  }

  return EventType::NOT_SET;
}

Aws::String GetNameForEventType(EventType enumValue) {
  switch (enumValue) {
    case EventType::NOT_SET:
      return {};
    case EventType::SnapshotAndDeleteUnattachedEbsVolume:
      return "SnapshotAndDeleteUnattachedEbsVolume";
    case EventType::UpgradeEbsVolumeType:
      return "UpgradeEbsVolumeType";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
