/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/EventSourceMappingAction.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
namespace EventSourceMappingActionMapper {

static const int enable_HASH = HashingUtils::HashString("enable");
static const int disable_HASH = HashingUtils::HashString("disable");

EventSourceMappingAction GetEventSourceMappingActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enable_HASH) {
    return EventSourceMappingAction::enable;
  } else if (hashCode == disable_HASH) {
    return EventSourceMappingAction::disable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventSourceMappingAction>(hashCode);
  }

  return EventSourceMappingAction::NOT_SET;
}

Aws::String GetNameForEventSourceMappingAction(EventSourceMappingAction enumValue) {
  switch (enumValue) {
    case EventSourceMappingAction::NOT_SET:
      return {};
    case EventSourceMappingAction::enable:
      return "enable";
    case EventSourceMappingAction::disable:
      return "disable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventSourceMappingActionMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
