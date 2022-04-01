/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ComputeOptimizer
{
namespace ComputeOptimizerEndpoint
{
AWS_COMPUTEOPTIMIZER_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ComputeOptimizerEndpoint
} // namespace ComputeOptimizer
} // namespace Aws
