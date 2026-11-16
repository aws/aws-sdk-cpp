/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class FeedbackArtifactType { NOT_SET, CLINICAL_DOC, MEDICAL_CODES };

namespace FeedbackArtifactTypeMapper {
AWS_CONNECTHEALTH_API FeedbackArtifactType GetFeedbackArtifactTypeForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForFeedbackArtifactType(FeedbackArtifactType value);
}  // namespace FeedbackArtifactTypeMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
