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
enum class DurationUnit { NOT_SET, MINUTES, HOURS, DAYS };

namespace DurationUnitMapper {
AWS_CONNECTSCHEDULING_API DurationUnit GetDurationUnitForName(const Aws::String& name);

AWS_CONNECTSCHEDULING_API Aws::String GetNameForDurationUnit(DurationUnit value);
}  // namespace DurationUnitMapper
}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
