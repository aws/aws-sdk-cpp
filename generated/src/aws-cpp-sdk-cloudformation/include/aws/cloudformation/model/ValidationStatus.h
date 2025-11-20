/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudFormation {
namespace Model {
enum class ValidationStatus { NOT_SET, FAILED, SKIPPED };

namespace ValidationStatusMapper {
AWS_CLOUDFORMATION_API ValidationStatus GetValidationStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForValidationStatus(ValidationStatus value);
}  // namespace ValidationStatusMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
