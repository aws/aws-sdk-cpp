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
  enum class ActionType
  {
    NOT_SET,
    Rightsize,
    Stop,
    Upgrade,
    PurchaseSavingsPlans,
    PurchaseReservedInstances,
    MigrateToGraviton
  };

namespace ActionTypeMapper
{
AWS_COSTOPTIMIZATIONHUB_API ActionType GetActionTypeForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForActionType(ActionType value);
} // namespace ActionTypeMapper
} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
