/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class DateComparisonType
  {
    NOT_SET,
    GREATER_THAN,
    LESS_THAN,
    GREATER_THAN_OR_EQUAL_TO,
    LESS_THAN_OR_EQUAL_TO,
    EQUAL_TO
  };

namespace DateComparisonTypeMapper
{
AWS_CONNECT_API DateComparisonType GetDateComparisonTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForDateComparisonType(DateComparisonType value);
} // namespace DateComparisonTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
