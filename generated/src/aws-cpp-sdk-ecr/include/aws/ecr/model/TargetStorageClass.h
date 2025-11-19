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
enum class TargetStorageClass { NOT_SET, STANDARD, ARCHIVE };

namespace TargetStorageClassMapper {
AWS_ECR_API TargetStorageClass GetTargetStorageClassForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForTargetStorageClass(TargetStorageClass value);
}  // namespace TargetStorageClassMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
