/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/InquiryStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {
namespace InquiryStatusMapper {

static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
static const int HUMAN_REVIEW_HASH = HashingUtils::HashString("HUMAN_REVIEW");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

InquiryStatus GetInquiryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROCESSING_HASH) {
    return InquiryStatus::PROCESSING;
  } else if (hashCode == HUMAN_REVIEW_HASH) {
    return InquiryStatus::HUMAN_REVIEW;
  } else if (hashCode == COMPLETED_HASH) {
    return InquiryStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return InquiryStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InquiryStatus>(hashCode);
  }

  return InquiryStatus::NOT_SET;
}

Aws::String GetNameForInquiryStatus(InquiryStatus enumValue) {
  switch (enumValue) {
    case InquiryStatus::NOT_SET:
      return {};
    case InquiryStatus::PROCESSING:
      return "PROCESSING";
    case InquiryStatus::HUMAN_REVIEW:
      return "HUMAN_REVIEW";
    case InquiryStatus::COMPLETED:
      return "COMPLETED";
    case InquiryStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InquiryStatusMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
