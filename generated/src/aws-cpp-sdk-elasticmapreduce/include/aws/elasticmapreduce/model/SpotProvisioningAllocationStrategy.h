/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class SpotProvisioningAllocationStrategy
  {
    NOT_SET,
    capacity_optimized
  };

namespace SpotProvisioningAllocationStrategyMapper
{
AWS_EMR_API SpotProvisioningAllocationStrategy GetSpotProvisioningAllocationStrategyForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForSpotProvisioningAllocationStrategy(SpotProvisioningAllocationStrategy value);
} // namespace SpotProvisioningAllocationStrategyMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
