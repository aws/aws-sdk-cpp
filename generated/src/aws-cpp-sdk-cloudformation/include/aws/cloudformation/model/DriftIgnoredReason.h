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
enum class DriftIgnoredReason { NOT_SET, MANAGED_BY_AWS, WRITE_ONLY_PROPERTY };

namespace DriftIgnoredReasonMapper {
AWS_CLOUDFORMATION_API DriftIgnoredReason GetDriftIgnoredReasonForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForDriftIgnoredReason(DriftIgnoredReason value);
}  // namespace DriftIgnoredReasonMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
