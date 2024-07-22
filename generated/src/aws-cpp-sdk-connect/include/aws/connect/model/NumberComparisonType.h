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
  enum class NumberComparisonType
  {
    NOT_SET,
    GREATER_OR_EQUAL,
    GREATER,
    LESSER_OR_EQUAL,
    LESSER,
    EQUAL,
    NOT_EQUAL,
    RANGE
  };

namespace NumberComparisonTypeMapper
{
AWS_CONNECT_API NumberComparisonType GetNumberComparisonTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForNumberComparisonType(NumberComparisonType value);
} // namespace NumberComparisonTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
