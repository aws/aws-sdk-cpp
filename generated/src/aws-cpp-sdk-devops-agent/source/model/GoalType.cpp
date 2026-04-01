/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/GoalType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace GoalTypeMapper {

static const int CUSTOMER_DEFINED_HASH = HashingUtils::HashString("CUSTOMER_DEFINED");
static const int ONCALL_REPORT_HASH = HashingUtils::HashString("ONCALL_REPORT");

GoalType GetGoalTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_DEFINED_HASH) {
    return GoalType::CUSTOMER_DEFINED;
  } else if (hashCode == ONCALL_REPORT_HASH) {
    return GoalType::ONCALL_REPORT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GoalType>(hashCode);
  }

  return GoalType::NOT_SET;
}

Aws::String GetNameForGoalType(GoalType enumValue) {
  switch (enumValue) {
    case GoalType::NOT_SET:
      return {};
    case GoalType::CUSTOMER_DEFINED:
      return "CUSTOMER_DEFINED";
    case GoalType::ONCALL_REPORT:
      return "ONCALL_REPORT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GoalTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
