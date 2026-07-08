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
enum class InquiryStatusMessage {
  NOT_SET,
  Compliance_inquiry_processing_is_complete,
  Malware_was_detected_on_the_file_Provide_a_new_file_and_try_again,
  Compliance_inquiry_processing_is_in_progress,
  An_internal_error_occurred_while_processing_the_inquiry_Try_again_at_a_later_time,
  Human_review_is_in_progress,
  Compliance_inquiry_processing_is_complete_One_or_more_queries_encountered_errors_during_processing
};

namespace InquiryStatusMessageMapper {
AWS_ARTIFACT_API InquiryStatusMessage GetInquiryStatusMessageForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForInquiryStatusMessage(InquiryStatusMessage value);
}  // namespace InquiryStatusMessageMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
