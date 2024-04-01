/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class ComparisonOperator
  {
    NOT_SET,
    EQUAL,
    NOT_EQUAL,
    GREATER_THAN_EQUAL_TO,
    GREATER_THAN,
    LESS_THAN_EQUAL_TO,
    LESS_THAN
  };

namespace ComparisonOperatorMapper
{
AWS_DEADLINE_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
} // namespace ComparisonOperatorMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
