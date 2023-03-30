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
  enum class InstanceState
  {
    NOT_SET,
    pending,
    running,
    shutting_down,
    terminated,
    stopping,
    stopped
  };

namespace InstanceStateMapper
{
AWS_COMPUTEOPTIMIZER_API InstanceState GetInstanceStateForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForInstanceState(InstanceState value);
} // namespace InstanceStateMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
