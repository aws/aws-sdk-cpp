/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/ReplicationBackfillStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace ReplicationBackfillStatusMapper {

static const int PREPARING_HASH = HashingUtils::HashString("PREPARING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");

ReplicationBackfillStatus GetReplicationBackfillStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PREPARING_HASH) {
    return ReplicationBackfillStatus::PREPARING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return ReplicationBackfillStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETE_HASH) {
    return ReplicationBackfillStatus::COMPLETE;
  } else if (hashCode == FAILED_HASH) {
    return ReplicationBackfillStatus::FAILED;
  } else if (hashCode == STOPPING_HASH) {
    return ReplicationBackfillStatus::STOPPING;
  } else if (hashCode == STOPPED_HASH) {
    return ReplicationBackfillStatus::STOPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReplicationBackfillStatus>(hashCode);
  }

  return ReplicationBackfillStatus::NOT_SET;
}

Aws::String GetNameForReplicationBackfillStatus(ReplicationBackfillStatus enumValue) {
  switch (enumValue) {
    case ReplicationBackfillStatus::NOT_SET:
      return {};
    case ReplicationBackfillStatus::PREPARING:
      return "PREPARING";
    case ReplicationBackfillStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case ReplicationBackfillStatus::COMPLETE:
      return "COMPLETE";
    case ReplicationBackfillStatus::FAILED:
      return "FAILED";
    case ReplicationBackfillStatus::STOPPING:
      return "STOPPING";
    case ReplicationBackfillStatus::STOPPED:
      return "STOPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReplicationBackfillStatusMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
