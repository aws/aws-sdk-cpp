/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/WafFailureMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace WafFailureModeMapper {

static const int FAIL_CLOSE_HASH = HashingUtils::HashString("FAIL_CLOSE");
static const int FAIL_OPEN_HASH = HashingUtils::HashString("FAIL_OPEN");

WafFailureMode GetWafFailureModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FAIL_CLOSE_HASH) {
    return WafFailureMode::FAIL_CLOSE;
  } else if (hashCode == FAIL_OPEN_HASH) {
    return WafFailureMode::FAIL_OPEN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WafFailureMode>(hashCode);
  }

  return WafFailureMode::NOT_SET;
}

Aws::String GetNameForWafFailureMode(WafFailureMode enumValue) {
  switch (enumValue) {
    case WafFailureMode::NOT_SET:
      return {};
    case WafFailureMode::FAIL_CLOSE:
      return "FAIL_CLOSE";
    case WafFailureMode::FAIL_OPEN:
      return "FAIL_OPEN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WafFailureModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
