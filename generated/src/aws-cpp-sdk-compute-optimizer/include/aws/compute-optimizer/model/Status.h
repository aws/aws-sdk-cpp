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
  enum class Status
  {
    NOT_SET,
    Active,
    Inactive,
    Pending,
    Failed
  };

namespace StatusMapper
{
AWS_COMPUTEOPTIMIZER_API Status GetStatusForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
