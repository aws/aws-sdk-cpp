/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECR_EXPORTS.h>

namespace Aws {
namespace ECR {
namespace Model {
enum class ImageStatusFilter { NOT_SET, ACTIVE, ARCHIVED, ACTIVATING, ANY };

namespace ImageStatusFilterMapper {
AWS_ECR_API ImageStatusFilter GetImageStatusFilterForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForImageStatusFilter(ImageStatusFilter value);
}  // namespace ImageStatusFilterMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
