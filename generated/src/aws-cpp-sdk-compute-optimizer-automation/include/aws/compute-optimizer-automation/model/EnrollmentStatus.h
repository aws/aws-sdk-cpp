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
enum class EnrollmentStatus { NOT_SET, Active, Inactive, Pending, Failed };

namespace EnrollmentStatusMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API EnrollmentStatus GetEnrollmentStatusForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForEnrollmentStatus(EnrollmentStatus value);
}  // namespace EnrollmentStatusMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
