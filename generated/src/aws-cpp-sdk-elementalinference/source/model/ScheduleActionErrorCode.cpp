/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/ScheduleActionErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace ScheduleActionErrorCodeMapper {

static const int INVALID_ACTION_TARGET_HASH = HashingUtils::HashString("INVALID_ACTION_TARGET");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

ScheduleActionErrorCode GetScheduleActionErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVALID_ACTION_TARGET_HASH) {
    return ScheduleActionErrorCode::INVALID_ACTION_TARGET;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return ScheduleActionErrorCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScheduleActionErrorCode>(hashCode);
  }

  return ScheduleActionErrorCode::NOT_SET;
}

Aws::String GetNameForScheduleActionErrorCode(ScheduleActionErrorCode enumValue) {
  switch (enumValue) {
    case ScheduleActionErrorCode::NOT_SET:
      return {};
    case ScheduleActionErrorCode::INVALID_ACTION_TARGET:
      return "INVALID_ACTION_TARGET";
    case ScheduleActionErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScheduleActionErrorCodeMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
