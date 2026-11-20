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
enum class OrganizationEnrollmentConfigurationStatus { NOT_SET, Active, Inactive };

namespace OrganizationEnrollmentConfigurationStatusMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationEnrollmentConfigurationStatus
GetOrganizationEnrollmentConfigurationStatusForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForOrganizationEnrollmentConfigurationStatus(
    OrganizationEnrollmentConfigurationStatus value);
}  // namespace OrganizationEnrollmentConfigurationStatusMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
