/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class NumericOperator
  {
    NOT_SET,
    EQUAL,
    GREATER_THAN_OR_EQUAL,
    LESS_THAN_OR_EQUAL,
    GREATER_THAN,
    LESS_THAN,
    BETWEEN
  };

namespace NumericOperatorMapper
{
AWS_COSTEXPLORER_API NumericOperator GetNumericOperatorForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForNumericOperator(NumericOperator value);
} // namespace NumericOperatorMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
