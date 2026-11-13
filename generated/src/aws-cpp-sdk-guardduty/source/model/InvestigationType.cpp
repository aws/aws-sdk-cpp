/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/InvestigationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace InvestigationTypeMapper {

static const int FINDING_HASH = HashingUtils::HashString("FINDING");
static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");

InvestigationType GetInvestigationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FINDING_HASH) {
    return InvestigationType::FINDING;
  } else if (hashCode == ACCOUNT_HASH) {
    return InvestigationType::ACCOUNT;
  } else if (hashCode == ORGANIZATION_HASH) {
    return InvestigationType::ORGANIZATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InvestigationType>(hashCode);
  }

  return InvestigationType::NOT_SET;
}

Aws::String GetNameForInvestigationType(InvestigationType enumValue) {
  switch (enumValue) {
    case InvestigationType::NOT_SET:
      return {};
    case InvestigationType::FINDING:
      return "FINDING";
    case InvestigationType::ACCOUNT:
      return "ACCOUNT";
    case InvestigationType::ORGANIZATION:
      return "ORGANIZATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InvestigationTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
