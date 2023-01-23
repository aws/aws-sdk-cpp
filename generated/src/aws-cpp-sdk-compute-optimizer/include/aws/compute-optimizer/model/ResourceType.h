/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    Ec2Instance,
    AutoScalingGroup,
    EbsVolume,
    LambdaFunction,
    NotApplicable,
    EcsService
  };

namespace ResourceTypeMapper
{
AWS_COMPUTEOPTIMIZER_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
