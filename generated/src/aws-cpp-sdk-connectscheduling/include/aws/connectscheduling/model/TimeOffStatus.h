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
enum class TimeOffStatus { NOT_SET, PENDING, APPROVED, REJECTED, CANCELLED, AWAITING_APPROVAL };

namespace TimeOffStatusMapper {
AWS_CONNECTSCHEDULING_API TimeOffStatus GetTimeOffStatusForName(const Aws::String& name);

AWS_CONNECTSCHEDULING_API Aws::String GetNameForTimeOffStatus(TimeOffStatus value);
}  // namespace TimeOffStatusMapper
}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
