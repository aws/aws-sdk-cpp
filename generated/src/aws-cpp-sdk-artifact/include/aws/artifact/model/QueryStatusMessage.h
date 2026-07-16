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
enum class QueryStatusMessage {
  NOT_SET,
  Query_processing_is_complete,
  Query_processing_is_in_progress,
  An_internal_error_occurred_while_processing_the_query_Try_again_at_a_later_time,
  Query_is_pending_human_review,
  Query_contains_restricted_or_unsupported_content
};

namespace QueryStatusMessageMapper {
AWS_ARTIFACT_API QueryStatusMessage GetQueryStatusMessageForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForQueryStatusMessage(QueryStatusMessage value);
}  // namespace QueryStatusMessageMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
