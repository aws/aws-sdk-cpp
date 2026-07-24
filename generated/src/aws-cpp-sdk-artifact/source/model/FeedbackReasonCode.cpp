/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/FeedbackReasonCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {
namespace FeedbackReasonCodeMapper {

static const int OTHER_HASH = HashingUtils::HashString("OTHER");
static const int PARTIAL_RESPONSE_HASH = HashingUtils::HashString("PARTIAL_RESPONSE");
static const int IRRELEVANT_RESPONSE_HASH = HashingUtils::HashString("IRRELEVANT_RESPONSE");

FeedbackReasonCode GetFeedbackReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OTHER_HASH) {
    return FeedbackReasonCode::OTHER;
  } else if (hashCode == PARTIAL_RESPONSE_HASH) {
    return FeedbackReasonCode::PARTIAL_RESPONSE;
  } else if (hashCode == IRRELEVANT_RESPONSE_HASH) {
    return FeedbackReasonCode::IRRELEVANT_RESPONSE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FeedbackReasonCode>(hashCode);
  }

  return FeedbackReasonCode::NOT_SET;
}

Aws::String GetNameForFeedbackReasonCode(FeedbackReasonCode enumValue) {
  switch (enumValue) {
    case FeedbackReasonCode::NOT_SET:
      return {};
    case FeedbackReasonCode::OTHER:
      return "OTHER";
    case FeedbackReasonCode::PARTIAL_RESPONSE:
      return "PARTIAL_RESPONSE";
    case FeedbackReasonCode::IRRELEVANT_RESPONSE:
      return "IRRELEVANT_RESPONSE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FeedbackReasonCodeMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
