/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StageStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace StageStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");
static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int PARTIAL_SUCCESS_HASH = HashingUtils::HashString("PARTIAL_SUCCESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

StageStatus GetStageStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return StageStatus::PENDING;
  } else if (hashCode == NOT_APPLICABLE_HASH) {
    return StageStatus::NOT_APPLICABLE;
  } else if (hashCode == NOT_STARTED_HASH) {
    return StageStatus::NOT_STARTED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return StageStatus::IN_PROGRESS;
  } else if (hashCode == SUCCEEDED_HASH) {
    return StageStatus::SUCCEEDED;
  } else if (hashCode == PARTIAL_SUCCESS_HASH) {
    return StageStatus::PARTIAL_SUCCESS;
  } else if (hashCode == FAILED_HASH) {
    return StageStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StageStatus>(hashCode);
  }

  return StageStatus::NOT_SET;
}

Aws::String GetNameForStageStatus(StageStatus enumValue) {
  switch (enumValue) {
    case StageStatus::NOT_SET:
      return {};
    case StageStatus::PENDING:
      return "PENDING";
    case StageStatus::NOT_APPLICABLE:
      return "NOT_APPLICABLE";
    case StageStatus::NOT_STARTED:
      return "NOT_STARTED";
    case StageStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case StageStatus::SUCCEEDED:
      return "SUCCEEDED";
    case StageStatus::PARTIAL_SUCCESS:
      return "PARTIAL_SUCCESS";
    case StageStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StageStatusMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
