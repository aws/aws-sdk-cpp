/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class DateRangeUnit
  {
    NOT_SET,
    DAYS
  };

namespace DateRangeUnitMapper
{
AWS_SECURITYHUB_API DateRangeUnit GetDateRangeUnitForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForDateRangeUnit(DateRangeUnit value);
} // namespace DateRangeUnitMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
