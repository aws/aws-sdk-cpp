/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class TrendmicroConnectorOperator
  {
    NOT_SET,
    PROJECTION,
    EQUAL_TO,
    ADDITION,
    MULTIPLICATION,
    DIVISION,
    SUBTRACTION,
    MASK_ALL,
    MASK_FIRST_N,
    MASK_LAST_N,
    VALIDATE_NON_NULL,
    VALIDATE_NON_ZERO,
    VALIDATE_NON_NEGATIVE,
    VALIDATE_NUMERIC,
    NO_OP
  };

namespace TrendmicroConnectorOperatorMapper
{
AWS_APPFLOW_API TrendmicroConnectorOperator GetTrendmicroConnectorOperatorForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForTrendmicroConnectorOperator(TrendmicroConnectorOperator value);
} // namespace TrendmicroConnectorOperatorMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
