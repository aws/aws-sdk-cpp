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
enum class AnnotationStatus { NOT_SET, PASSED, FAILED, SKIPPED };

namespace AnnotationStatusMapper {
AWS_CLOUDFORMATION_API AnnotationStatus GetAnnotationStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForAnnotationStatus(AnnotationStatus value);
}  // namespace AnnotationStatusMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
