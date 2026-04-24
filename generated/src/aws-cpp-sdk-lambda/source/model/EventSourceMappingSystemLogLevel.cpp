/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/EventSourceMappingSystemLogLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace EventSourceMappingSystemLogLevelMapper {

static const int DEBUG__HASH = HashingUtils::HashString("DEBUG");
static const int INFO_HASH = HashingUtils::HashString("INFO");
static const int WARN_HASH = HashingUtils::HashString("WARN");

EventSourceMappingSystemLogLevel GetEventSourceMappingSystemLogLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEBUG__HASH) {
    return EventSourceMappingSystemLogLevel::DEBUG_;
  } else if (hashCode == INFO_HASH) {
    return EventSourceMappingSystemLogLevel::INFO;
  } else if (hashCode == WARN_HASH) {
    return EventSourceMappingSystemLogLevel::WARN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventSourceMappingSystemLogLevel>(hashCode);
  }

  return EventSourceMappingSystemLogLevel::NOT_SET;
}

Aws::String GetNameForEventSourceMappingSystemLogLevel(EventSourceMappingSystemLogLevel enumValue) {
  switch (enumValue) {
    case EventSourceMappingSystemLogLevel::NOT_SET:
      return {};
    case EventSourceMappingSystemLogLevel::DEBUG_:
      return "DEBUG";
    case EventSourceMappingSystemLogLevel::INFO:
      return "INFO";
    case EventSourceMappingSystemLogLevel::WARN:
      return "WARN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventSourceMappingSystemLogLevelMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
