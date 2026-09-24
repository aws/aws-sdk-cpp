/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/EventSourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace EventSourceTypeMapper {

static const int AWS_SERVICE_EVENTS_HASH = HashingUtils::HashString("AWS_SERVICE_EVENTS");
static const int PARTNER_EVENTS_HASH = HashingUtils::HashString("PARTNER_EVENTS");

EventSourceType GetEventSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_SERVICE_EVENTS_HASH) {
    return EventSourceType::AWS_SERVICE_EVENTS;
  } else if (hashCode == PARTNER_EVENTS_HASH) {
    return EventSourceType::PARTNER_EVENTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventSourceType>(hashCode);
  }

  return EventSourceType::NOT_SET;
}

Aws::String GetNameForEventSourceType(EventSourceType enumValue) {
  switch (enumValue) {
    case EventSourceType::NOT_SET:
      return {};
    case EventSourceType::AWS_SERVICE_EVENTS:
      return "AWS_SERVICE_EVENTS";
    case EventSourceType::PARTNER_EVENTS:
      return "PARTNER_EVENTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventSourceTypeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
