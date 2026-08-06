/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AutoApprovalRule.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace AutoApprovalRuleMapper {

static const int APPROVE_ALL_HASH = HashingUtils::HashString("APPROVE_ALL");

AutoApprovalRule GetAutoApprovalRuleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPROVE_ALL_HASH) {
    return AutoApprovalRule::APPROVE_ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutoApprovalRule>(hashCode);
  }

  return AutoApprovalRule::NOT_SET;
}

Aws::String GetNameForAutoApprovalRule(AutoApprovalRule enumValue) {
  switch (enumValue) {
    case AutoApprovalRule::NOT_SET:
      return {};
    case AutoApprovalRule::APPROVE_ALL:
      return "APPROVE_ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutoApprovalRuleMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
