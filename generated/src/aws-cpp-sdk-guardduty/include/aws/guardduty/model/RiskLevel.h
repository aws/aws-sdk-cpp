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
enum class RiskLevel { NOT_SET, Info, Low, Medium, High, Critical };

namespace RiskLevelMapper {
AWS_GUARDDUTY_API RiskLevel GetRiskLevelForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForRiskLevel(RiskLevel value);
}  // namespace RiskLevelMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
