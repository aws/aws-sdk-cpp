/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{
  enum class UsageLimitPeriod
  {
    NOT_SET,
    daily,
    weekly,
    monthly
  };

namespace UsageLimitPeriodMapper
{
AWS_REDSHIFTSERVERLESS_API UsageLimitPeriod GetUsageLimitPeriodForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForUsageLimitPeriod(UsageLimitPeriod value);
} // namespace UsageLimitPeriodMapper
} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
