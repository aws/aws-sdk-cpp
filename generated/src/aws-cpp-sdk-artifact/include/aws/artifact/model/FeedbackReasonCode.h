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
enum class FeedbackReasonCode { NOT_SET, OTHER, PARTIAL_RESPONSE, IRRELEVANT_RESPONSE };

namespace FeedbackReasonCodeMapper {
AWS_ARTIFACT_API FeedbackReasonCode GetFeedbackReasonCodeForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForFeedbackReasonCode(FeedbackReasonCode value);
}  // namespace FeedbackReasonCodeMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
