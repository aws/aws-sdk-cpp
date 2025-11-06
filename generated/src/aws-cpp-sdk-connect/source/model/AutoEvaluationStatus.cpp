/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AutoEvaluationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace AutoEvaluationStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");

AutoEvaluationStatus GetAutoEvaluationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return AutoEvaluationStatus::IN_PROGRESS;
  } else if (hashCode == FAILED_HASH) {
    return AutoEvaluationStatus::FAILED;
  } else if (hashCode == SUCCEEDED_HASH) {
    return AutoEvaluationStatus::SUCCEEDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutoEvaluationStatus>(hashCode);
  }

  return AutoEvaluationStatus::NOT_SET;
}

Aws::String GetNameForAutoEvaluationStatus(AutoEvaluationStatus enumValue) {
  switch (enumValue) {
    case AutoEvaluationStatus::NOT_SET:
      return {};
    case AutoEvaluationStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case AutoEvaluationStatus::FAILED:
      return "FAILED";
    case AutoEvaluationStatus::SUCCEEDED:
      return "SUCCEEDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutoEvaluationStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
