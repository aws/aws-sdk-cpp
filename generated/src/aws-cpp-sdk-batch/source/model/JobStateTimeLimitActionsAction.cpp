﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/JobStateTimeLimitActionsAction.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {
namespace JobStateTimeLimitActionsActionMapper {

static const int CANCEL_HASH = HashingUtils::HashString("CANCEL");
static const int TERMINATE_HASH = HashingUtils::HashString("TERMINATE");

JobStateTimeLimitActionsAction GetJobStateTimeLimitActionsActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CANCEL_HASH) {
    return JobStateTimeLimitActionsAction::CANCEL;
  } else if (hashCode == TERMINATE_HASH) {
    return JobStateTimeLimitActionsAction::TERMINATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobStateTimeLimitActionsAction>(hashCode);
  }

  return JobStateTimeLimitActionsAction::NOT_SET;
}

Aws::String GetNameForJobStateTimeLimitActionsAction(JobStateTimeLimitActionsAction enumValue) {
  switch (enumValue) {
    case JobStateTimeLimitActionsAction::NOT_SET:
      return {};
    case JobStateTimeLimitActionsAction::CANCEL:
      return "CANCEL";
    case JobStateTimeLimitActionsAction::TERMINATE:
      return "TERMINATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobStateTimeLimitActionsActionMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
