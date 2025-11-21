/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/RuleType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace RuleTypeMapper {

static const int OrganizationRule_HASH = HashingUtils::HashString("OrganizationRule");
static const int AccountRule_HASH = HashingUtils::HashString("AccountRule");

RuleType GetRuleTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OrganizationRule_HASH) {
    return RuleType::OrganizationRule;
  } else if (hashCode == AccountRule_HASH) {
    return RuleType::AccountRule;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleType>(hashCode);
  }

  return RuleType::NOT_SET;
}

Aws::String GetNameForRuleType(RuleType enumValue) {
  switch (enumValue) {
    case RuleType::NOT_SET:
      return {};
    case RuleType::OrganizationRule:
      return "OrganizationRule";
    case RuleType::AccountRule:
      return "AccountRule";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
