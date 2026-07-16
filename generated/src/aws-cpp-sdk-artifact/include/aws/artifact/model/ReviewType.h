/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Artifact {
namespace Model {
enum class ReviewType { NOT_SET, HUMAN, AI };

namespace ReviewTypeMapper {
AWS_ARTIFACT_API ReviewType GetReviewTypeForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForReviewType(ReviewType value);
}  // namespace ReviewTypeMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
