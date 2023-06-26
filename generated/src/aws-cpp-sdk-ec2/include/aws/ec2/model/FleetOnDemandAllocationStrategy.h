/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class FleetOnDemandAllocationStrategy
  {
    NOT_SET,
    lowest_price,
    prioritized
  };

namespace FleetOnDemandAllocationStrategyMapper
{
AWS_EC2_API FleetOnDemandAllocationStrategy GetFleetOnDemandAllocationStrategyForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFleetOnDemandAllocationStrategy(FleetOnDemandAllocationStrategy value);
} // namespace FleetOnDemandAllocationStrategyMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
