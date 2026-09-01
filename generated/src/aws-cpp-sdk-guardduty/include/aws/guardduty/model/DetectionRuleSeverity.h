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
enum class DetectionRuleSeverity { NOT_SET, CRITICAL, HIGH, MEDIUM, LOW };

namespace DetectionRuleSeverityMapper {
AWS_GUARDDUTY_API DetectionRuleSeverity GetDetectionRuleSeverityForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForDetectionRuleSeverity(DetectionRuleSeverity value);
}  // namespace DetectionRuleSeverityMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
