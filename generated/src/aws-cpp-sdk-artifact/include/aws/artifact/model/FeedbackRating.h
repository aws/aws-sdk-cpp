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
enum class FeedbackRating { NOT_SET, THUMBS_UP, THUMBS_DOWN };

namespace FeedbackRatingMapper {
AWS_ARTIFACT_API FeedbackRating GetFeedbackRatingForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForFeedbackRating(FeedbackRating value);
}  // namespace FeedbackRatingMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
