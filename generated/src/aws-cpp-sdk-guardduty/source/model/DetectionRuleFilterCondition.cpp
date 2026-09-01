/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/DetectionRuleFilterCondition.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace DetectionRuleFilterConditionMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");

DetectionRuleFilterCondition GetDetectionRuleFilterConditionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return DetectionRuleFilterCondition::EQUALS;
  } else if (hashCode == CONTAINS_HASH) {
    return DetectionRuleFilterCondition::CONTAINS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DetectionRuleFilterCondition>(hashCode);
  }

  return DetectionRuleFilterCondition::NOT_SET;
}

Aws::String GetNameForDetectionRuleFilterCondition(DetectionRuleFilterCondition enumValue) {
  switch (enumValue) {
    case DetectionRuleFilterCondition::NOT_SET:
      return {};
    case DetectionRuleFilterCondition::EQUALS:
      return "EQUALS";
    case DetectionRuleFilterCondition::CONTAINS:
      return "CONTAINS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DetectionRuleFilterConditionMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
