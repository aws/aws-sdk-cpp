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
  enum class HealthStatusValue
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY
  };

namespace HealthStatusValueMapper
{
AWS_BUDGETS_API HealthStatusValue GetHealthStatusValueForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForHealthStatusValue(HealthStatusValue value);
} // namespace HealthStatusValueMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
