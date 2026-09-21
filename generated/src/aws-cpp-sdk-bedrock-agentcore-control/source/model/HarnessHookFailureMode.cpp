/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessHookFailureMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace HarnessHookFailureModeMapper {

static const int allow_HASH = HashingUtils::HashString("allow");
static const int deny_HASH = HashingUtils::HashString("deny");

HarnessHookFailureMode GetHarnessHookFailureModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == allow_HASH) {
    return HarnessHookFailureMode::allow;
  } else if (hashCode == deny_HASH) {
    return HarnessHookFailureMode::deny;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HarnessHookFailureMode>(hashCode);
  }

  return HarnessHookFailureMode::NOT_SET;
}

Aws::String GetNameForHarnessHookFailureMode(HarnessHookFailureMode enumValue) {
  switch (enumValue) {
    case HarnessHookFailureMode::NOT_SET:
      return {};
    case HarnessHookFailureMode::allow:
      return "allow";
    case HarnessHookFailureMode::deny:
      return "deny";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HarnessHookFailureModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
