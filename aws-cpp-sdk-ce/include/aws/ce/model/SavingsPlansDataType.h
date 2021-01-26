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
  enum class SavingsPlansDataType
  {
    NOT_SET,
    ATTRIBUTES,
    UTILIZATION,
    AMORTIZED_COMMITMENT,
    SAVINGS
  };

namespace SavingsPlansDataTypeMapper
{
AWS_COSTEXPLORER_API SavingsPlansDataType GetSavingsPlansDataTypeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForSavingsPlansDataType(SavingsPlansDataType value);
} // namespace SavingsPlansDataTypeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
