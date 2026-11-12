/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/InvestigationFilterCriterionKey.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace InvestigationFilterCriterionKeyMapper {

static const int STATUS_HASH = HashingUtils::HashString("STATUS");
static const int RISK_LEVEL_HASH = HashingUtils::HashString("RISK_LEVEL");
static const int CONFIDENCE_HASH = HashingUtils::HashString("CONFIDENCE");
static const int FINDING_ID_HASH = HashingUtils::HashString("FINDING_ID");
static const int INVESTIGATION_TYPE_HASH = HashingUtils::HashString("INVESTIGATION_TYPE");

InvestigationFilterCriterionKey GetInvestigationFilterCriterionKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STATUS_HASH) {
    return InvestigationFilterCriterionKey::STATUS;
  } else if (hashCode == RISK_LEVEL_HASH) {
    return InvestigationFilterCriterionKey::RISK_LEVEL;
  } else if (hashCode == CONFIDENCE_HASH) {
    return InvestigationFilterCriterionKey::CONFIDENCE;
  } else if (hashCode == FINDING_ID_HASH) {
    return InvestigationFilterCriterionKey::FINDING_ID;
  } else if (hashCode == INVESTIGATION_TYPE_HASH) {
    return InvestigationFilterCriterionKey::INVESTIGATION_TYPE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InvestigationFilterCriterionKey>(hashCode);
  }

  return InvestigationFilterCriterionKey::NOT_SET;
}

Aws::String GetNameForInvestigationFilterCriterionKey(InvestigationFilterCriterionKey enumValue) {
  switch (enumValue) {
    case InvestigationFilterCriterionKey::NOT_SET:
      return {};
    case InvestigationFilterCriterionKey::STATUS:
      return "STATUS";
    case InvestigationFilterCriterionKey::RISK_LEVEL:
      return "RISK_LEVEL";
    case InvestigationFilterCriterionKey::CONFIDENCE:
      return "CONFIDENCE";
    case InvestigationFilterCriterionKey::FINDING_ID:
      return "FINDING_ID";
    case InvestigationFilterCriterionKey::INVESTIGATION_TYPE:
      return "INVESTIGATION_TYPE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InvestigationFilterCriterionKeyMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
