/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessHookEventType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace HarnessHookEventTypeMapper {

static const int before_tool_call_HASH = HashingUtils::HashString("before_tool_call");
static const int after_tool_call_HASH = HashingUtils::HashString("after_tool_call");
static const int before_invocation_HASH = HashingUtils::HashString("before_invocation");
static const int after_invocation_HASH = HashingUtils::HashString("after_invocation");

HarnessHookEventType GetHarnessHookEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == before_tool_call_HASH) {
    return HarnessHookEventType::before_tool_call;
  } else if (hashCode == after_tool_call_HASH) {
    return HarnessHookEventType::after_tool_call;
  } else if (hashCode == before_invocation_HASH) {
    return HarnessHookEventType::before_invocation;
  } else if (hashCode == after_invocation_HASH) {
    return HarnessHookEventType::after_invocation;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HarnessHookEventType>(hashCode);
  }

  return HarnessHookEventType::NOT_SET;
}

Aws::String GetNameForHarnessHookEventType(HarnessHookEventType enumValue) {
  switch (enumValue) {
    case HarnessHookEventType::NOT_SET:
      return {};
    case HarnessHookEventType::before_tool_call:
      return "before_tool_call";
    case HarnessHookEventType::after_tool_call:
      return "after_tool_call";
    case HarnessHookEventType::before_invocation:
      return "before_invocation";
    case HarnessHookEventType::after_invocation:
      return "after_invocation";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HarnessHookEventTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
