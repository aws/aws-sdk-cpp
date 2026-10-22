/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/ScheduleActionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace ScheduleActionStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ScheduleActionStatus GetScheduleActionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return ScheduleActionStatus::PENDING;
  } else if (hashCode == COMPLETED_HASH) {
    return ScheduleActionStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return ScheduleActionStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScheduleActionStatus>(hashCode);
  }

  return ScheduleActionStatus::NOT_SET;
}

Aws::String GetNameForScheduleActionStatus(ScheduleActionStatus enumValue) {
  switch (enumValue) {
    case ScheduleActionStatus::NOT_SET:
      return {};
    case ScheduleActionStatus::PENDING:
      return "PENDING";
    case ScheduleActionStatus::COMPLETED:
      return "COMPLETED";
    case ScheduleActionStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScheduleActionStatusMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
