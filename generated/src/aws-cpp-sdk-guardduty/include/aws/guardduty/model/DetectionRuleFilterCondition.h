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
enum class DetectionRuleFilterCondition { NOT_SET, EQUALS, CONTAINS };

namespace DetectionRuleFilterConditionMapper {
AWS_GUARDDUTY_API DetectionRuleFilterCondition GetDetectionRuleFilterConditionForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForDetectionRuleFilterCondition(DetectionRuleFilterCondition value);
}  // namespace DetectionRuleFilterConditionMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
