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
enum class InquirySupportMode { NOT_SET, AI_ONLY, FULL_SUPPORT };

namespace InquirySupportModeMapper {
AWS_ARTIFACT_API InquirySupportMode GetInquirySupportModeForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForInquirySupportMode(InquirySupportMode value);
}  // namespace InquirySupportModeMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
