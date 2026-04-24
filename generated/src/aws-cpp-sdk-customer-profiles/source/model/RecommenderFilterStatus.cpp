/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/RecommenderFilterStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace RecommenderFilterStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

RecommenderFilterStatus GetRecommenderFilterStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return RecommenderFilterStatus::ACTIVE;
  } else if (hashCode == PENDING_HASH) {
    return RecommenderFilterStatus::PENDING;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return RecommenderFilterStatus::IN_PROGRESS;
  } else if (hashCode == FAILED_HASH) {
    return RecommenderFilterStatus::FAILED;
  } else if (hashCode == DELETING_HASH) {
    return RecommenderFilterStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommenderFilterStatus>(hashCode);
  }

  return RecommenderFilterStatus::NOT_SET;
}

Aws::String GetNameForRecommenderFilterStatus(RecommenderFilterStatus enumValue) {
  switch (enumValue) {
    case RecommenderFilterStatus::NOT_SET:
      return {};
    case RecommenderFilterStatus::ACTIVE:
      return "ACTIVE";
    case RecommenderFilterStatus::PENDING:
      return "PENDING";
    case RecommenderFilterStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case RecommenderFilterStatus::FAILED:
      return "FAILED";
    case RecommenderFilterStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommenderFilterStatusMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
