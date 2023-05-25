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
  enum class CpuVendorArchitecture
  {
    NOT_SET,
    AWS_ARM64,
    CURRENT
  };

namespace CpuVendorArchitectureMapper
{
AWS_COMPUTEOPTIMIZER_API CpuVendorArchitecture GetCpuVendorArchitectureForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForCpuVendorArchitecture(CpuVendorArchitecture value);
} // namespace CpuVendorArchitectureMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
