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
enum class LifecyclePolicyStorageClass { NOT_SET, ARCHIVE, STANDARD };

namespace LifecyclePolicyStorageClassMapper {
AWS_ECR_API LifecyclePolicyStorageClass GetLifecyclePolicyStorageClassForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForLifecyclePolicyStorageClass(LifecyclePolicyStorageClass value);
}  // namespace LifecyclePolicyStorageClassMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
