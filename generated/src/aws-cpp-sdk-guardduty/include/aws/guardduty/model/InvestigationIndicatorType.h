/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class InvestigationIndicatorType { NOT_SET, IP, DOMAIN_, FILE };

namespace InvestigationIndicatorTypeMapper {
AWS_GUARDDUTY_API InvestigationIndicatorType GetInvestigationIndicatorTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForInvestigationIndicatorType(InvestigationIndicatorType value);
}  // namespace InvestigationIndicatorTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
