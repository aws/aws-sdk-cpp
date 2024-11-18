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
  enum class DateDimensionType
  {
    NOT_SET,
    BEFORE,
    AFTER,
    BETWEEN,
    NOT_BETWEEN,
    ON
  };

namespace DateDimensionTypeMapper
{
AWS_CUSTOMERPROFILES_API DateDimensionType GetDateDimensionTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForDateDimensionType(DateDimensionType value);
} // namespace DateDimensionTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
