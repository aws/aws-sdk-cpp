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
enum class OrganizationTargetType { NOT_SET, Account, OrganizationalUnit };

namespace OrganizationTargetTypeMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationTargetType GetOrganizationTargetTypeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForOrganizationTargetType(OrganizationTargetType value);
}  // namespace OrganizationTargetTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
