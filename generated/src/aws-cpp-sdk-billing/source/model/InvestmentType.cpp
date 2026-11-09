/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/InvestmentType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {
namespace InvestmentTypeMapper {

static const int MILESTONE_BASED_HASH = HashingUtils::HashString("MILESTONE_BASED");
static const int OUTCOME_BASED_HASH = HashingUtils::HashString("OUTCOME_BASED");

InvestmentType GetInvestmentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MILESTONE_BASED_HASH) {
    return InvestmentType::MILESTONE_BASED;
  } else if (hashCode == OUTCOME_BASED_HASH) {
    return InvestmentType::OUTCOME_BASED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InvestmentType>(hashCode);
  }

  return InvestmentType::NOT_SET;
}

Aws::String GetNameForInvestmentType(InvestmentType enumValue) {
  switch (enumValue) {
    case InvestmentType::NOT_SET:
      return {};
    case InvestmentType::MILESTONE_BASED:
      return "MILESTONE_BASED";
    case InvestmentType::OUTCOME_BASED:
      return "OUTCOME_BASED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InvestmentTypeMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
