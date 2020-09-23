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
  enum class AnomalySubscriptionFrequency
  {
    NOT_SET,
    DAILY,
    IMMEDIATE,
    WEEKLY
  };

namespace AnomalySubscriptionFrequencyMapper
{
AWS_COSTEXPLORER_API AnomalySubscriptionFrequency GetAnomalySubscriptionFrequencyForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForAnomalySubscriptionFrequency(AnomalySubscriptionFrequency value);
} // namespace AnomalySubscriptionFrequencyMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
