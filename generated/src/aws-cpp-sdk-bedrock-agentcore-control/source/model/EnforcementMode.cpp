/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EnforcementMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace EnforcementModeMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int LOG_ONLY_HASH = HashingUtils::HashString("LOG_ONLY");

EnforcementMode GetEnforcementModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return EnforcementMode::ACTIVE;
  } else if (hashCode == LOG_ONLY_HASH) {
    return EnforcementMode::LOG_ONLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EnforcementMode>(hashCode);
  }

  return EnforcementMode::NOT_SET;
}

Aws::String GetNameForEnforcementMode(EnforcementMode enumValue) {
  switch (enumValue) {
    case EnforcementMode::NOT_SET:
      return {};
    case EnforcementMode::ACTIVE:
      return "ACTIVE";
    case EnforcementMode::LOG_ONLY:
      return "LOG_ONLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EnforcementModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
