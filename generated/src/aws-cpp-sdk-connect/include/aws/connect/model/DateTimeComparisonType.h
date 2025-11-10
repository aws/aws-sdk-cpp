/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class DateTimeComparisonType { NOT_SET, GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL_TO, LESS_THAN_OR_EQUAL_TO, EQUAL_TO, RANGE };

namespace DateTimeComparisonTypeMapper {
AWS_CONNECT_API DateTimeComparisonType GetDateTimeComparisonTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForDateTimeComparisonType(DateTimeComparisonType value);
}  // namespace DateTimeComparisonTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
