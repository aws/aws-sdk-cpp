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
enum class AnnotationSeverityLevel { NOT_SET, INFORMATIONAL, LOW, MEDIUM, HIGH, CRITICAL };

namespace AnnotationSeverityLevelMapper {
AWS_CLOUDFORMATION_API AnnotationSeverityLevel GetAnnotationSeverityLevelForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForAnnotationSeverityLevel(AnnotationSeverityLevel value);
}  // namespace AnnotationSeverityLevelMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
