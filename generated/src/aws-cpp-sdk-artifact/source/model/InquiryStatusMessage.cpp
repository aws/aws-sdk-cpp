/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/InquiryStatusMessage.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {
namespace InquiryStatusMessageMapper {

static const int Compliance_inquiry_processing_is_complete_HASH = HashingUtils::HashString("Compliance inquiry processing is complete.");
static const int Malware_was_detected_on_the_file_Provide_a_new_file_and_try_again_HASH =
    HashingUtils::HashString("Malware was detected on the file. Provide a new file and try again.");
static const int Compliance_inquiry_processing_is_in_progress_HASH =
    HashingUtils::HashString("Compliance inquiry processing is in-progress.");
static const int An_internal_error_occurred_while_processing_the_inquiry_Try_again_at_a_later_time_HASH =
    HashingUtils::HashString("An internal error occurred while processing the inquiry. Try again at a later time.");
static const int Human_review_is_in_progress_HASH = HashingUtils::HashString("Human review is in progress.");
static const int Compliance_inquiry_processing_is_complete_One_or_more_queries_encountered_errors_during_processing_HASH =
    HashingUtils::HashString("Compliance inquiry processing is complete. One or more queries encountered errors during processing.");

InquiryStatusMessage GetInquiryStatusMessageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Compliance_inquiry_processing_is_complete_HASH) {
    return InquiryStatusMessage::Compliance_inquiry_processing_is_complete;
  } else if (hashCode == Malware_was_detected_on_the_file_Provide_a_new_file_and_try_again_HASH) {
    return InquiryStatusMessage::Malware_was_detected_on_the_file_Provide_a_new_file_and_try_again;
  } else if (hashCode == Compliance_inquiry_processing_is_in_progress_HASH) {
    return InquiryStatusMessage::Compliance_inquiry_processing_is_in_progress;
  } else if (hashCode == An_internal_error_occurred_while_processing_the_inquiry_Try_again_at_a_later_time_HASH) {
    return InquiryStatusMessage::An_internal_error_occurred_while_processing_the_inquiry_Try_again_at_a_later_time;
  } else if (hashCode == Human_review_is_in_progress_HASH) {
    return InquiryStatusMessage::Human_review_is_in_progress;
  } else if (hashCode == Compliance_inquiry_processing_is_complete_One_or_more_queries_encountered_errors_during_processing_HASH) {
    return InquiryStatusMessage::Compliance_inquiry_processing_is_complete_One_or_more_queries_encountered_errors_during_processing;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InquiryStatusMessage>(hashCode);
  }

  return InquiryStatusMessage::NOT_SET;
}

Aws::String GetNameForInquiryStatusMessage(InquiryStatusMessage enumValue) {
  switch (enumValue) {
    case InquiryStatusMessage::NOT_SET:
      return {};
    case InquiryStatusMessage::Compliance_inquiry_processing_is_complete:
      return "Compliance inquiry processing is complete.";
    case InquiryStatusMessage::Malware_was_detected_on_the_file_Provide_a_new_file_and_try_again:
      return "Malware was detected on the file. Provide a new file and try again.";
    case InquiryStatusMessage::Compliance_inquiry_processing_is_in_progress:
      return "Compliance inquiry processing is in-progress.";
    case InquiryStatusMessage::An_internal_error_occurred_while_processing_the_inquiry_Try_again_at_a_later_time:
      return "An internal error occurred while processing the inquiry. Try again at a later time.";
    case InquiryStatusMessage::Human_review_is_in_progress:
      return "Human review is in progress.";
    case InquiryStatusMessage::Compliance_inquiry_processing_is_complete_One_or_more_queries_encountered_errors_during_processing:
      return "Compliance inquiry processing is complete. One or more queries encountered errors during processing.";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InquiryStatusMessageMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
