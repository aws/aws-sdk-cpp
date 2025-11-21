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
enum class ArtifactStatus { NOT_SET, ACTIVE, ARCHIVED, ACTIVATING };

namespace ArtifactStatusMapper {
AWS_ECR_API ArtifactStatus GetArtifactStatusForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForArtifactStatus(ArtifactStatus value);
}  // namespace ArtifactStatusMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
