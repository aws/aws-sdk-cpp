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
enum class TimeOffValidationSeverity { NOT_SET, WARNING, ERROR_ };

namespace TimeOffValidationSeverityMapper {
AWS_CONNECTSCHEDULING_API TimeOffValidationSeverity GetTimeOffValidationSeverityForName(const Aws::String& name);

AWS_CONNECTSCHEDULING_API Aws::String GetNameForTimeOffValidationSeverity(TimeOffValidationSeverity value);
}  // namespace TimeOffValidationSeverityMapper
}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
