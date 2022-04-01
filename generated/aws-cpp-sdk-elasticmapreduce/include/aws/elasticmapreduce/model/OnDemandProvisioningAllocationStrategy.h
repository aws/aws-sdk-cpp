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
  enum class OnDemandProvisioningAllocationStrategy
  {
    NOT_SET,
    lowest_price
  };

namespace OnDemandProvisioningAllocationStrategyMapper
{
AWS_EMR_API OnDemandProvisioningAllocationStrategy GetOnDemandProvisioningAllocationStrategyForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForOnDemandProvisioningAllocationStrategy(OnDemandProvisioningAllocationStrategy value);
} // namespace OnDemandProvisioningAllocationStrategyMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
