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
enum class InvestigationFilterCriterionKey { NOT_SET, STATUS, RISK_LEVEL, CONFIDENCE, FINDING_ID, INVESTIGATION_TYPE };

namespace InvestigationFilterCriterionKeyMapper {
AWS_GUARDDUTY_API InvestigationFilterCriterionKey GetInvestigationFilterCriterionKeyForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForInvestigationFilterCriterionKey(InvestigationFilterCriterionKey value);
}  // namespace InvestigationFilterCriterionKeyMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
