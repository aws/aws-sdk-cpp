/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/TopicReassignmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace TopicReassignmentStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");

TopicReassignmentStatus GetTopicReassignmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return TopicReassignmentStatus::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return TopicReassignmentStatus::IN_PROGRESS;
  } else if (hashCode == STOPPING_HASH) {
    return TopicReassignmentStatus::STOPPING;
  } else if (hashCode == COMPLETE_HASH) {
    return TopicReassignmentStatus::COMPLETE;
  } else if (hashCode == FAILED_HASH) {
    return TopicReassignmentStatus::FAILED;
  } else if (hashCode == STOPPED_HASH) {
    return TopicReassignmentStatus::STOPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TopicReassignmentStatus>(hashCode);
  }

  return TopicReassignmentStatus::NOT_SET;
}

Aws::String GetNameForTopicReassignmentStatus(TopicReassignmentStatus enumValue) {
  switch (enumValue) {
    case TopicReassignmentStatus::NOT_SET:
      return {};
    case TopicReassignmentStatus::PENDING:
      return "PENDING";
    case TopicReassignmentStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case TopicReassignmentStatus::STOPPING:
      return "STOPPING";
    case TopicReassignmentStatus::COMPLETE:
      return "COMPLETE";
    case TopicReassignmentStatus::FAILED:
      return "FAILED";
    case TopicReassignmentStatus::STOPPED:
      return "STOPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TopicReassignmentStatusMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
