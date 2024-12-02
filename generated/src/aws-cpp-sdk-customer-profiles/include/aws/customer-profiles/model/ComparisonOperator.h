/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class ComparisonOperator
  {
    NOT_SET,
    INCLUSIVE,
    EXCLUSIVE,
    CONTAINS,
    BEGINS_WITH,
    ENDS_WITH,
    GREATER_THAN,
    LESS_THAN,
    GREATER_THAN_OR_EQUAL,
    LESS_THAN_OR_EQUAL,
    EQUAL,
    BEFORE,
    AFTER,
    ON,
    BETWEEN,
    NOT_BETWEEN
  };

namespace ComparisonOperatorMapper
{
AWS_CUSTOMERPROFILES_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
} // namespace ComparisonOperatorMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
