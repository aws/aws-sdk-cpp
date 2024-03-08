/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{
  enum class ImplementationEffort
  {
    NOT_SET,
    VeryLow,
    Low,
    Medium,
    High,
    VeryHigh
  };

namespace ImplementationEffortMapper
{
AWS_COSTOPTIMIZATIONHUB_API ImplementationEffort GetImplementationEffortForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForImplementationEffort(ImplementationEffort value);
} // namespace ImplementationEffortMapper
} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
