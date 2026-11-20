/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/EventType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace EventTypeMapper {

static const int WAF_API_SECURITY_HASH = HashingUtils::HashString("WAF_API_SECURITY");

EventType GetEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WAF_API_SECURITY_HASH) {
    return EventType::WAF_API_SECURITY;
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
    case EventType::WAF_API_SECURITY:
      return "WAF_API_SECURITY";
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
}  // namespace APIPortal
}  // namespace Aws
