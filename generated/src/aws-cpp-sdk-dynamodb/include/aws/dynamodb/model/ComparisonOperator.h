/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#if defined(_WIN32) && defined(IN)
#undef IN
#endif

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
  enum class ComparisonOperator
  {
    NOT_SET,
    EQ,
    NE,
    IN,
    LE,
    LT,
    GE,
    GT,
    BETWEEN,
    NOT_NULL,
    NULL_,
    CONTAINS,
    NOT_CONTAINS,
    BEGINS_WITH
  };

namespace ComparisonOperatorMapper
{
AWS_DYNAMODB_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
} // namespace ComparisonOperatorMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
