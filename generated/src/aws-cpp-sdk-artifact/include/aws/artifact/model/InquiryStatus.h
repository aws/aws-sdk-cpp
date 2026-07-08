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
enum class InquiryStatus { NOT_SET, PROCESSING, HUMAN_REVIEW, COMPLETED, FAILED };

namespace InquiryStatusMapper {
AWS_ARTIFACT_API InquiryStatus GetInquiryStatusForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForInquiryStatus(InquiryStatus value);
}  // namespace InquiryStatusMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
