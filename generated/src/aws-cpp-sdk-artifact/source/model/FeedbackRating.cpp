/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/FeedbackRating.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {
namespace FeedbackRatingMapper {

static const int THUMBS_UP_HASH = HashingUtils::HashString("THUMBS_UP");
static const int THUMBS_DOWN_HASH = HashingUtils::HashString("THUMBS_DOWN");

FeedbackRating GetFeedbackRatingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == THUMBS_UP_HASH) {
    return FeedbackRating::THUMBS_UP;
  } else if (hashCode == THUMBS_DOWN_HASH) {
    return FeedbackRating::THUMBS_DOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FeedbackRating>(hashCode);
  }

  return FeedbackRating::NOT_SET;
}

Aws::String GetNameForFeedbackRating(FeedbackRating enumValue) {
  switch (enumValue) {
    case FeedbackRating::NOT_SET:
      return {};
    case FeedbackRating::THUMBS_UP:
      return "THUMBS_UP";
    case FeedbackRating::THUMBS_DOWN:
      return "THUMBS_DOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FeedbackRatingMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
