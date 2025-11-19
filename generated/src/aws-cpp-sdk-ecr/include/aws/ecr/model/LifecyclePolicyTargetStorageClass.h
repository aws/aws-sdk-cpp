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
enum class LifecyclePolicyTargetStorageClass { NOT_SET, ARCHIVE };

namespace LifecyclePolicyTargetStorageClassMapper {
AWS_ECR_API LifecyclePolicyTargetStorageClass GetLifecyclePolicyTargetStorageClassForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForLifecyclePolicyTargetStorageClass(LifecyclePolicyTargetStorageClass value);
}  // namespace LifecyclePolicyTargetStorageClassMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
