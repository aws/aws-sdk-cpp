/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/QueryStatusMessage.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {
namespace QueryStatusMessageMapper {

static const int Query_processing_is_complete_HASH = HashingUtils::HashString("Query processing is complete.");
static const int Query_processing_is_in_progress_HASH = HashingUtils::HashString("Query processing is in-progress.");
static const int An_internal_error_occurred_while_processing_the_query_Try_again_at_a_later_time_HASH =
    HashingUtils::HashString("An internal error occurred while processing the query. Try again at a later time.");
static const int Query_is_pending_human_review_HASH = HashingUtils::HashString("Query is pending human review.");
static const int Query_contains_restricted_or_unsupported_content_HASH =
    HashingUtils::HashString("Query contains restricted or unsupported content.");

QueryStatusMessage GetQueryStatusMessageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Query_processing_is_complete_HASH) {
    return QueryStatusMessage::Query_processing_is_complete;
  } else if (hashCode == Query_processing_is_in_progress_HASH) {
    return QueryStatusMessage::Query_processing_is_in_progress;
  } else if (hashCode == An_internal_error_occurred_while_processing_the_query_Try_again_at_a_later_time_HASH) {
    return QueryStatusMessage::An_internal_error_occurred_while_processing_the_query_Try_again_at_a_later_time;
  } else if (hashCode == Query_is_pending_human_review_HASH) {
    return QueryStatusMessage::Query_is_pending_human_review;
  } else if (hashCode == Query_contains_restricted_or_unsupported_content_HASH) {
    return QueryStatusMessage::Query_contains_restricted_or_unsupported_content;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QueryStatusMessage>(hashCode);
  }

  return QueryStatusMessage::NOT_SET;
}

Aws::String GetNameForQueryStatusMessage(QueryStatusMessage enumValue) {
  switch (enumValue) {
    case QueryStatusMessage::NOT_SET:
      return {};
    case QueryStatusMessage::Query_processing_is_complete:
      return "Query processing is complete.";
    case QueryStatusMessage::Query_processing_is_in_progress:
      return "Query processing is in-progress.";
    case QueryStatusMessage::An_internal_error_occurred_while_processing_the_query_Try_again_at_a_later_time:
      return "An internal error occurred while processing the query. Try again at a later time.";
    case QueryStatusMessage::Query_is_pending_human_review:
      return "Query is pending human review.";
    case QueryStatusMessage::Query_contains_restricted_or_unsupported_content:
      return "Query contains restricted or unsupported content.";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QueryStatusMessageMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
