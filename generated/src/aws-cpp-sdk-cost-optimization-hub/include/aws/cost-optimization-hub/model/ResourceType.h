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
  enum class ResourceType
  {
    NOT_SET,
    Ec2Instance,
    LambdaFunction,
    EbsVolume,
    EcsService,
    Ec2AutoScalingGroup,
    Ec2InstanceSavingsPlans,
    ComputeSavingsPlans,
    SageMakerSavingsPlans,
    Ec2ReservedInstances,
    RdsReservedInstances,
    OpenSearchReservedInstances,
    RedshiftReservedInstances,
    ElastiCacheReservedInstances
  };

namespace ResourceTypeMapper
{
AWS_COSTOPTIMIZATIONHUB_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
