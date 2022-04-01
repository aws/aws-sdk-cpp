/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class ComparisonOperator
  {
    NOT_SET,
    GREATER_THAN_OR_EQUAL,
    GREATER_THAN,
    LESS_THAN,
    LESS_THAN_OR_EQUAL
  };

namespace ComparisonOperatorMapper
{
AWS_EMR_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
} // namespace ComparisonOperatorMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
