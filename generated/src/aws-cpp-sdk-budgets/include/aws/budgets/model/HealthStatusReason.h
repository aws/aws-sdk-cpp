/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Budgets
{
namespace Model
{
  enum class HealthStatusReason
  {
    NOT_SET,
    BILLING_VIEW_NO_ACCESS,
    BILLING_VIEW_UNHEALTHY,
    FILTER_INVALID,
    MULTI_YEAR_HISTORICAL_DATA_DISABLED
  };

namespace HealthStatusReasonMapper
{
AWS_BUDGETS_API HealthStatusReason GetHealthStatusReasonForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForHealthStatusReason(HealthStatusReason value);
} // namespace HealthStatusReasonMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
