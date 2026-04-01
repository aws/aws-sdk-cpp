/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EventFilterCondition.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace EventFilterConditionMapper {

static const int HAS_EVENTS_HASH = HashingUtils::HashString("HAS_EVENTS");

EventFilterCondition GetEventFilterConditionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HAS_EVENTS_HASH) {
    return EventFilterCondition::HAS_EVENTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventFilterCondition>(hashCode);
  }

  return EventFilterCondition::NOT_SET;
}

Aws::String GetNameForEventFilterCondition(EventFilterCondition enumValue) {
  switch (enumValue) {
    case EventFilterCondition::NOT_SET:
      return {};
    case EventFilterCondition::HAS_EVENTS:
      return "HAS_EVENTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventFilterConditionMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
