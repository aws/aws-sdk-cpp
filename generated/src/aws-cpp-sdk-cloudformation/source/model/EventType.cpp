/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/EventType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace EventTypeMapper {

static const int STACK_EVENT_HASH = HashingUtils::HashString("STACK_EVENT");
static const int PROGRESS_EVENT_HASH = HashingUtils::HashString("PROGRESS_EVENT");
static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
static const int PROVISIONING_ERROR_HASH = HashingUtils::HashString("PROVISIONING_ERROR");
static const int HOOK_INVOCATION_ERROR_HASH = HashingUtils::HashString("HOOK_INVOCATION_ERROR");

EventType GetEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STACK_EVENT_HASH) {
    return EventType::STACK_EVENT;
  } else if (hashCode == PROGRESS_EVENT_HASH) {
    return EventType::PROGRESS_EVENT;
  } else if (hashCode == VALIDATION_ERROR_HASH) {
    return EventType::VALIDATION_ERROR;
  } else if (hashCode == PROVISIONING_ERROR_HASH) {
    return EventType::PROVISIONING_ERROR;
  } else if (hashCode == HOOK_INVOCATION_ERROR_HASH) {
    return EventType::HOOK_INVOCATION_ERROR;
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
    case EventType::STACK_EVENT:
      return "STACK_EVENT";
    case EventType::PROGRESS_EVENT:
      return "PROGRESS_EVENT";
    case EventType::VALIDATION_ERROR:
      return "VALIDATION_ERROR";
    case EventType::PROVISIONING_ERROR:
      return "PROVISIONING_ERROR";
    case EventType::HOOK_INVOCATION_ERROR:
      return "HOOK_INVOCATION_ERROR";
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
}  // namespace CloudFormation
}  // namespace Aws
