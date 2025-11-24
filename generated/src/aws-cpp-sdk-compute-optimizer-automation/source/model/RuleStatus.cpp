/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/RuleStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace RuleStatusMapper {

static const int Active_HASH = HashingUtils::HashString("Active");
static const int Inactive_HASH = HashingUtils::HashString("Inactive");

RuleStatus GetRuleStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Active_HASH) {
    return RuleStatus::Active;
  } else if (hashCode == Inactive_HASH) {
    return RuleStatus::Inactive;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuleStatus>(hashCode);
  }

  return RuleStatus::NOT_SET;
}

Aws::String GetNameForRuleStatus(RuleStatus enumValue) {
  switch (enumValue) {
    case RuleStatus::NOT_SET:
      return {};
    case RuleStatus::Active:
      return "Active";
    case RuleStatus::Inactive:
      return "Inactive";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuleStatusMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
