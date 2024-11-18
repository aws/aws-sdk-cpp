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
  enum class FilterDimensionType
  {
    NOT_SET,
    INCLUSIVE,
    EXCLUSIVE,
    CONTAINS,
    BEGINS_WITH,
    ENDS_WITH,
    BEFORE,
    AFTER,
    BETWEEN,
    NOT_BETWEEN,
    ON,
    GREATER_THAN,
    LESS_THAN,
    GREATER_THAN_OR_EQUAL,
    LESS_THAN_OR_EQUAL,
    EQUAL
  };

namespace FilterDimensionTypeMapper
{
AWS_CUSTOMERPROFILES_API FilterDimensionType GetFilterDimensionTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForFilterDimensionType(FilterDimensionType value);
} // namespace FilterDimensionTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
