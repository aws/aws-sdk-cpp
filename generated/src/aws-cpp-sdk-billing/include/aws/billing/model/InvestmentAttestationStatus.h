/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Billing {
namespace Model {
enum class InvestmentAttestationStatus {
  NOT_SET,
  PENDING_REVIEW,
  PENDING_C_LEVEL_APPROVAL,
  PENDING_CANCELLATION,
  REJECTED,
  CANCELLED,
  DISBURSED
};

namespace InvestmentAttestationStatusMapper {
AWS_BILLING_API InvestmentAttestationStatus GetInvestmentAttestationStatusForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForInvestmentAttestationStatus(InvestmentAttestationStatus value);
}  // namespace InvestmentAttestationStatusMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
