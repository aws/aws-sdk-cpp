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
enum class OrgFeatureAdditionalConfiguration { NOT_SET, EKS_ADDON_MANAGEMENT, ECS_FARGATE_AGENT_MANAGEMENT, EC2_AGENT_MANAGEMENT };

namespace OrgFeatureAdditionalConfigurationMapper {
AWS_GUARDDUTY_API OrgFeatureAdditionalConfiguration GetOrgFeatureAdditionalConfigurationForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForOrgFeatureAdditionalConfiguration(OrgFeatureAdditionalConfiguration value);
}  // namespace OrgFeatureAdditionalConfigurationMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
