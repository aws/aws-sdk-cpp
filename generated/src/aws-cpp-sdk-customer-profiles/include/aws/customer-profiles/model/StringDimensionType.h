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
  enum class StringDimensionType
  {
    NOT_SET,
    INCLUSIVE,
    EXCLUSIVE,
    CONTAINS,
    BEGINS_WITH,
    ENDS_WITH
  };

namespace StringDimensionTypeMapper
{
AWS_CUSTOMERPROFILES_API StringDimensionType GetStringDimensionTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForStringDimensionType(StringDimensionType value);
} // namespace StringDimensionTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
