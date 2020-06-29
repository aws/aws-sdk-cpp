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
  enum class SupportedSavingsPlansType
  {
    NOT_SET,
    COMPUTE_SP,
    EC2_INSTANCE_SP
  };

namespace SupportedSavingsPlansTypeMapper
{
AWS_COSTEXPLORER_API SupportedSavingsPlansType GetSupportedSavingsPlansTypeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForSupportedSavingsPlansType(SupportedSavingsPlansType value);
} // namespace SupportedSavingsPlansTypeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
