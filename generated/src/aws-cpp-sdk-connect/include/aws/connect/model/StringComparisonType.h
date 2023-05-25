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
  enum class StringComparisonType
  {
    NOT_SET,
    STARTS_WITH,
    CONTAINS,
    EXACT
  };

namespace StringComparisonTypeMapper
{
AWS_CONNECT_API StringComparisonType GetStringComparisonTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForStringComparisonType(StringComparisonType value);
} // namespace StringComparisonTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
