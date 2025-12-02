/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PolicyValidationMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PolicyValidationModeMapper {

static const int FAIL_ON_ANY_FINDINGS_HASH = HashingUtils::HashString("FAIL_ON_ANY_FINDINGS");
static const int IGNORE_ALL_FINDINGS_HASH = HashingUtils::HashString("IGNORE_ALL_FINDINGS");

PolicyValidationMode GetPolicyValidationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FAIL_ON_ANY_FINDINGS_HASH) {
    return PolicyValidationMode::FAIL_ON_ANY_FINDINGS;
  } else if (hashCode == IGNORE_ALL_FINDINGS_HASH) {
    return PolicyValidationMode::IGNORE_ALL_FINDINGS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyValidationMode>(hashCode);
  }

  return PolicyValidationMode::NOT_SET;
}

Aws::String GetNameForPolicyValidationMode(PolicyValidationMode enumValue) {
  switch (enumValue) {
    case PolicyValidationMode::NOT_SET:
      return {};
    case PolicyValidationMode::FAIL_ON_ANY_FINDINGS:
      return "FAIL_ON_ANY_FINDINGS";
    case PolicyValidationMode::IGNORE_ALL_FINDINGS:
      return "IGNORE_ALL_FINDINGS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyValidationModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
