/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/InvestigationSortField.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace InvestigationSortFieldMapper {

static const int START_TIME_HASH = HashingUtils::HashString("START_TIME");
static const int END_TIME_HASH = HashingUtils::HashString("END_TIME");
static const int STATUS_HASH = HashingUtils::HashString("STATUS");
static const int RISK_LEVEL_HASH = HashingUtils::HashString("RISK_LEVEL");
static const int CONFIDENCE_HASH = HashingUtils::HashString("CONFIDENCE");

InvestigationSortField GetInvestigationSortFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == START_TIME_HASH) {
    return InvestigationSortField::START_TIME;
  } else if (hashCode == END_TIME_HASH) {
    return InvestigationSortField::END_TIME;
  } else if (hashCode == STATUS_HASH) {
    return InvestigationSortField::STATUS;
  } else if (hashCode == RISK_LEVEL_HASH) {
    return InvestigationSortField::RISK_LEVEL;
  } else if (hashCode == CONFIDENCE_HASH) {
    return InvestigationSortField::CONFIDENCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InvestigationSortField>(hashCode);
  }

  return InvestigationSortField::NOT_SET;
}

Aws::String GetNameForInvestigationSortField(InvestigationSortField enumValue) {
  switch (enumValue) {
    case InvestigationSortField::NOT_SET:
      return {};
    case InvestigationSortField::START_TIME:
      return "START_TIME";
    case InvestigationSortField::END_TIME:
      return "END_TIME";
    case InvestigationSortField::STATUS:
      return "STATUS";
    case InvestigationSortField::RISK_LEVEL:
      return "RISK_LEVEL";
    case InvestigationSortField::CONFIDENCE:
      return "CONFIDENCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InvestigationSortFieldMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
