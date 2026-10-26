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
enum class InvestmentType { NOT_SET, MILESTONE_BASED, OUTCOME_BASED };

namespace InvestmentTypeMapper {
AWS_BILLING_API InvestmentType GetInvestmentTypeForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForInvestmentType(InvestmentType value);
}  // namespace InvestmentTypeMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
