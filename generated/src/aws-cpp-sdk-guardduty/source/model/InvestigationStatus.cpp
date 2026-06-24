/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/InvestigationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace InvestigationStatusMapper {

static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

InvestigationStatus GetInvestigationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RUNNING_HASH) {
    return InvestigationStatus::RUNNING;
  } else if (hashCode == COMPLETED_HASH) {
    return InvestigationStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return InvestigationStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InvestigationStatus>(hashCode);
  }

  return InvestigationStatus::NOT_SET;
}

Aws::String GetNameForInvestigationStatus(InvestigationStatus enumValue) {
  switch (enumValue) {
    case InvestigationStatus::NOT_SET:
      return {};
    case InvestigationStatus::RUNNING:
      return "RUNNING";
    case InvestigationStatus::COMPLETED:
      return "COMPLETED";
    case InvestigationStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InvestigationStatusMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
