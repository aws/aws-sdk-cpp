/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ACM {
namespace Model {
enum class TimeType { NOT_SET, MINUTES, HOURS, DAYS };

namespace TimeTypeMapper {
AWS_ACM_API TimeType GetTimeTypeForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForTimeType(TimeType value);
}  // namespace TimeTypeMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
