/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/model/TimeOffValidationCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectScheduling {
namespace Model {
namespace TimeOffValidationCodeMapper {

static const int INSUFFICIENT_USER_TIME_OFF_BALANCE_HASH = HashingUtils::HashString("INSUFFICIENT_USER_TIME_OFF_BALANCE");
static const int INSUFFICIENT_GROUP_TIME_OFF_ALLOWANCE_HASH = HashingUtils::HashString("INSUFFICIENT_GROUP_TIME_OFF_ALLOWANCE");
static const int INSUFFICIENT_STAFFING_GROUP_TIME_OFF_ALLOWANCE_HASH =
    HashingUtils::HashString("INSUFFICIENT_STAFFING_GROUP_TIME_OFF_ALLOWANCE");
static const int CONFLICTING_TIME_OFF_REQUEST_HASH = HashingUtils::HashString("CONFLICTING_TIME_OFF_REQUEST");

TimeOffValidationCode GetTimeOffValidationCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INSUFFICIENT_USER_TIME_OFF_BALANCE_HASH) {
    return TimeOffValidationCode::INSUFFICIENT_USER_TIME_OFF_BALANCE;
  } else if (hashCode == INSUFFICIENT_GROUP_TIME_OFF_ALLOWANCE_HASH) {
    return TimeOffValidationCode::INSUFFICIENT_GROUP_TIME_OFF_ALLOWANCE;
  } else if (hashCode == INSUFFICIENT_STAFFING_GROUP_TIME_OFF_ALLOWANCE_HASH) {
    return TimeOffValidationCode::INSUFFICIENT_STAFFING_GROUP_TIME_OFF_ALLOWANCE;
  } else if (hashCode == CONFLICTING_TIME_OFF_REQUEST_HASH) {
    return TimeOffValidationCode::CONFLICTING_TIME_OFF_REQUEST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TimeOffValidationCode>(hashCode);
  }

  return TimeOffValidationCode::NOT_SET;
}

Aws::String GetNameForTimeOffValidationCode(TimeOffValidationCode enumValue) {
  switch (enumValue) {
    case TimeOffValidationCode::NOT_SET:
      return {};
    case TimeOffValidationCode::INSUFFICIENT_USER_TIME_OFF_BALANCE:
      return "INSUFFICIENT_USER_TIME_OFF_BALANCE";
    case TimeOffValidationCode::INSUFFICIENT_GROUP_TIME_OFF_ALLOWANCE:
      return "INSUFFICIENT_GROUP_TIME_OFF_ALLOWANCE";
    case TimeOffValidationCode::INSUFFICIENT_STAFFING_GROUP_TIME_OFF_ALLOWANCE:
      return "INSUFFICIENT_STAFFING_GROUP_TIME_OFF_ALLOWANCE";
    case TimeOffValidationCode::CONFLICTING_TIME_OFF_REQUEST:
      return "CONFLICTING_TIME_OFF_REQUEST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TimeOffValidationCodeMapper
}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
