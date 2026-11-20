/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
enum class OrganizationEnrollmentConfigurationType { NOT_SET, OrganizationRuleMode };

namespace OrganizationEnrollmentConfigurationTypeMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationEnrollmentConfigurationType
GetOrganizationEnrollmentConfigurationTypeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForOrganizationEnrollmentConfigurationType(
    OrganizationEnrollmentConfigurationType value);
}  // namespace OrganizationEnrollmentConfigurationTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
