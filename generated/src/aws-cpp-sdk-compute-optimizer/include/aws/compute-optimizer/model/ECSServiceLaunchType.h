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
  enum class ECSServiceLaunchType
  {
    NOT_SET,
    EC2,
    Fargate
  };

namespace ECSServiceLaunchTypeMapper
{
AWS_COMPUTEOPTIMIZER_API ECSServiceLaunchType GetECSServiceLaunchTypeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForECSServiceLaunchType(ECSServiceLaunchType value);
} // namespace ECSServiceLaunchTypeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
