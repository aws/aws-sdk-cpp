/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/InvestmentAttestationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {
namespace InvestmentAttestationStatusMapper {

static const int PENDING_REVIEW_HASH = HashingUtils::HashString("PENDING_REVIEW");
static const int PENDING_C_LEVEL_APPROVAL_HASH = HashingUtils::HashString("PENDING_C_LEVEL_APPROVAL");
static const int PENDING_CANCELLATION_HASH = HashingUtils::HashString("PENDING_CANCELLATION");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
static const int DISBURSED_HASH = HashingUtils::HashString("DISBURSED");

InvestmentAttestationStatus GetInvestmentAttestationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_REVIEW_HASH) {
    return InvestmentAttestationStatus::PENDING_REVIEW;
  } else if (hashCode == PENDING_C_LEVEL_APPROVAL_HASH) {
    return InvestmentAttestationStatus::PENDING_C_LEVEL_APPROVAL;
  } else if (hashCode == PENDING_CANCELLATION_HASH) {
    return InvestmentAttestationStatus::PENDING_CANCELLATION;
  } else if (hashCode == REJECTED_HASH) {
    return InvestmentAttestationStatus::REJECTED;
  } else if (hashCode == CANCELLED_HASH) {
    return InvestmentAttestationStatus::CANCELLED;
  } else if (hashCode == DISBURSED_HASH) {
    return InvestmentAttestationStatus::DISBURSED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InvestmentAttestationStatus>(hashCode);
  }

  return InvestmentAttestationStatus::NOT_SET;
}

Aws::String GetNameForInvestmentAttestationStatus(InvestmentAttestationStatus enumValue) {
  switch (enumValue) {
    case InvestmentAttestationStatus::NOT_SET:
      return {};
    case InvestmentAttestationStatus::PENDING_REVIEW:
      return "PENDING_REVIEW";
    case InvestmentAttestationStatus::PENDING_C_LEVEL_APPROVAL:
      return "PENDING_C_LEVEL_APPROVAL";
    case InvestmentAttestationStatus::PENDING_CANCELLATION:
      return "PENDING_CANCELLATION";
    case InvestmentAttestationStatus::REJECTED:
      return "REJECTED";
    case InvestmentAttestationStatus::CANCELLED:
      return "CANCELLED";
    case InvestmentAttestationStatus::DISBURSED:
      return "DISBURSED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InvestmentAttestationStatusMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
