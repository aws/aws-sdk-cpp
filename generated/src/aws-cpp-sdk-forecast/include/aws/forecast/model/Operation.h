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
  enum class Operation
  {
    NOT_SET,
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
  };

namespace OperationMapper
{
AWS_FORECASTSERVICE_API Operation GetOperationForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForOperation(Operation value);
} // namespace OperationMapper
} // namespace Model
} // namespace ForecastService
} // namespace Aws
