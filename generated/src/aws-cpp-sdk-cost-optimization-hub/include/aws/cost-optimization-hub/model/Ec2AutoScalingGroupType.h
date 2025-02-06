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
  enum class Ec2AutoScalingGroupType
  {
    NOT_SET,
    SingleInstanceType,
    MixedInstanceTypes
  };

namespace Ec2AutoScalingGroupTypeMapper
{
AWS_COSTOPTIMIZATIONHUB_API Ec2AutoScalingGroupType GetEc2AutoScalingGroupTypeForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForEc2AutoScalingGroupType(Ec2AutoScalingGroupType value);
} // namespace Ec2AutoScalingGroupTypeMapper
} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
