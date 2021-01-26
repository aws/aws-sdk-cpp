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
  enum class EBSMetricName
  {
    NOT_SET,
    VolumeReadOpsPerSecond,
    VolumeWriteOpsPerSecond,
    VolumeReadBytesPerSecond,
    VolumeWriteBytesPerSecond
  };

namespace EBSMetricNameMapper
{
AWS_COMPUTEOPTIMIZER_API EBSMetricName GetEBSMetricNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForEBSMetricName(EBSMetricName value);
} // namespace EBSMetricNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
