/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/RuleApplyOrder.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace RuleApplyOrderMapper {

static const int BeforeAccountRules_HASH = HashingUtils::HashString("BeforeAccountRules");
static const int AfterAccountRules_HASH = HashingUtils::HashString("AfterAccountRules");

RuleApplyOrder GetRuleApplyOrderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BeforeAccountRules_HASH) {
    return RuleApplyOrder::BeforeAccountRules;
  } else if (hashCode == AfterAccountRules_HASH) {
    return RuleApplyOrder::AfterAccountRules;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleApplyOrder>(hashCode);
  }

  return RuleApplyOrder::NOT_SET;
}

Aws::String GetNameForRuleApplyOrder(RuleApplyOrder enumValue) {
  switch (enumValue) {
    case RuleApplyOrder::NOT_SET:
      return {};
    case RuleApplyOrder::BeforeAccountRules:
      return "BeforeAccountRules";
    case RuleApplyOrder::AfterAccountRules:
      return "AfterAccountRules";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleApplyOrderMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
