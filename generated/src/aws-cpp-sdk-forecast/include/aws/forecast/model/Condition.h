/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ForecastService
{
namespace Model
{
  enum class Condition
  {
    NOT_SET,
    EQUALS,
    NOT_EQUALS,
    LESS_THAN,
    GREATER_THAN
  };

namespace ConditionMapper
{
AWS_FORECASTSERVICE_API Condition GetConditionForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForCondition(Condition value);
} // namespace ConditionMapper
} // namespace Model
} // namespace ForecastService
} // namespace Aws
