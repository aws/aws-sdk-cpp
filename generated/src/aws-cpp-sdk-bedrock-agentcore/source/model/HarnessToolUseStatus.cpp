/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessToolUseStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace HarnessToolUseStatusMapper {

static const int success_HASH = HashingUtils::HashString("success");
static const int error_HASH = HashingUtils::HashString("error");

HarnessToolUseStatus GetHarnessToolUseStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == success_HASH) {
    return HarnessToolUseStatus::success;
  } else if (hashCode == error_HASH) {
    return HarnessToolUseStatus::error;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HarnessToolUseStatus>(hashCode);
  }

  return HarnessToolUseStatus::NOT_SET;
}

Aws::String GetNameForHarnessToolUseStatus(HarnessToolUseStatus enumValue) {
  switch (enumValue) {
    case HarnessToolUseStatus::NOT_SET:
      return {};
    case HarnessToolUseStatus::success:
      return "success";
    case HarnessToolUseStatus::error:
      return "error";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HarnessToolUseStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
