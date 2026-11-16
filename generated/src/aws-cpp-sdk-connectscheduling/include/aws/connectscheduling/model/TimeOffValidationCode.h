/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectScheduling {
namespace Model {
enum class TimeOffValidationCode {
  NOT_SET,
  INSUFFICIENT_USER_TIME_OFF_BALANCE,
  INSUFFICIENT_GROUP_TIME_OFF_ALLOWANCE,
  INSUFFICIENT_STAFFING_GROUP_TIME_OFF_ALLOWANCE,
  CONFLICTING_TIME_OFF_REQUEST
};

namespace TimeOffValidationCodeMapper {
AWS_CONNECTSCHEDULING_API TimeOffValidationCode GetTimeOffValidationCodeForName(const Aws::String& name);

AWS_CONNECTSCHEDULING_API Aws::String GetNameForTimeOffValidationCode(TimeOffValidationCode value);
}  // namespace TimeOffValidationCodeMapper
}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
