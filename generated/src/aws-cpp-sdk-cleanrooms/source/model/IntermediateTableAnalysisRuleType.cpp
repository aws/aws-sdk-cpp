/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IntermediateTableAnalysisRuleType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace IntermediateTableAnalysisRuleTypeMapper {

static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");

IntermediateTableAnalysisRuleType GetIntermediateTableAnalysisRuleTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOM_HASH) {
    return IntermediateTableAnalysisRuleType::CUSTOM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IntermediateTableAnalysisRuleType>(hashCode);
  }

  return IntermediateTableAnalysisRuleType::NOT_SET;
}

Aws::String GetNameForIntermediateTableAnalysisRuleType(IntermediateTableAnalysisRuleType enumValue) {
  switch (enumValue) {
    case IntermediateTableAnalysisRuleType::NOT_SET:
      return {};
    case IntermediateTableAnalysisRuleType::CUSTOM:
      return "CUSTOM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IntermediateTableAnalysisRuleTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
