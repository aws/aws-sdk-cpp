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
  enum class PlatformDifference
  {
    NOT_SET,
    Hypervisor,
    NetworkInterface,
    StorageInterface,
    InstanceStoreAvailability,
    VirtualizationType,
    Architecture
  };

namespace PlatformDifferenceMapper
{
AWS_COMPUTEOPTIMIZER_API PlatformDifference GetPlatformDifferenceForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForPlatformDifference(PlatformDifference value);
} // namespace PlatformDifferenceMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
