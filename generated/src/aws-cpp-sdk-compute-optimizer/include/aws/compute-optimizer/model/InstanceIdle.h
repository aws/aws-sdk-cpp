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
  enum class InstanceIdle
  {
    NOT_SET,
    True,
    False
  };

namespace InstanceIdleMapper
{
AWS_COMPUTEOPTIMIZER_API InstanceIdle GetInstanceIdleForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForInstanceIdle(InstanceIdle value);
} // namespace InstanceIdleMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
