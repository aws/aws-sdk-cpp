/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/RecommenderStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace RecommenderStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
static const int STARTING_HASH = HashingUtils::HashString("STARTING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

RecommenderStatus GetRecommenderStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return RecommenderStatus::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return RecommenderStatus::IN_PROGRESS;
  } else if (hashCode == ACTIVE_HASH) {
    return RecommenderStatus::ACTIVE;
  } else if (hashCode == FAILED_HASH) {
    return RecommenderStatus::FAILED;
  } else if (hashCode == STOPPING_HASH) {
    return RecommenderStatus::STOPPING;
  } else if (hashCode == INACTIVE_HASH) {
    return RecommenderStatus::INACTIVE;
  } else if (hashCode == STARTING_HASH) {
    return RecommenderStatus::STARTING;
  } else if (hashCode == DELETING_HASH) {
    return RecommenderStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommenderStatus>(hashCode);
  }

  return RecommenderStatus::NOT_SET;
}

Aws::String GetNameForRecommenderStatus(RecommenderStatus enumValue) {
  switch (enumValue) {
    case RecommenderStatus::NOT_SET:
      return {};
    case RecommenderStatus::PENDING:
      return "PENDING";
    case RecommenderStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case RecommenderStatus::ACTIVE:
      return "ACTIVE";
    case RecommenderStatus::FAILED:
      return "FAILED";
    case RecommenderStatus::STOPPING:
      return "STOPPING";
    case RecommenderStatus::INACTIVE:
      return "INACTIVE";
    case RecommenderStatus::STARTING:
      return "STARTING";
    case RecommenderStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommenderStatusMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
