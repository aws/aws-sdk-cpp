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
enum class ImageStatus { NOT_SET, ACTIVE, ARCHIVED, ACTIVATING };

namespace ImageStatusMapper {
AWS_ECR_API ImageStatus GetImageStatusForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForImageStatus(ImageStatus value);
}  // namespace ImageStatusMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
