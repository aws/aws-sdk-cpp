/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessHookDecision.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace HarnessHookDecisionMapper {

static const int allow_HASH = HashingUtils::HashString("allow");
static const int deny_HASH = HashingUtils::HashString("deny");

HarnessHookDecision GetHarnessHookDecisionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == allow_HASH) {
    return HarnessHookDecision::allow;
  } else if (hashCode == deny_HASH) {
    return HarnessHookDecision::deny;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HarnessHookDecision>(hashCode);
  }

  return HarnessHookDecision::NOT_SET;
}

Aws::String GetNameForHarnessHookDecision(HarnessHookDecision enumValue) {
  switch (enumValue) {
    case HarnessHookDecision::NOT_SET:
      return {};
    case HarnessHookDecision::allow:
      return "allow";
    case HarnessHookDecision::deny:
      return "deny";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HarnessHookDecisionMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
