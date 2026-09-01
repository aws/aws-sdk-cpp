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
enum class DetectionRuleDataSource { NOT_SET, CloudTrailManagementEvent };

namespace DetectionRuleDataSourceMapper {
AWS_GUARDDUTY_API DetectionRuleDataSource GetDetectionRuleDataSourceForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForDetectionRuleDataSource(DetectionRuleDataSource value);
}  // namespace DetectionRuleDataSourceMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
