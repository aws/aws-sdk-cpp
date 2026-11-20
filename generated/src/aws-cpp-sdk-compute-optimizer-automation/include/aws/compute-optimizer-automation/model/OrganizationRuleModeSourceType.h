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
enum class OrganizationRuleModeSourceType { NOT_SET, Applied, Inherited, Direct, Default };

namespace OrganizationRuleModeSourceTypeMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationRuleModeSourceType GetOrganizationRuleModeSourceTypeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForOrganizationRuleModeSourceType(OrganizationRuleModeSourceType value);
}  // namespace OrganizationRuleModeSourceTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
