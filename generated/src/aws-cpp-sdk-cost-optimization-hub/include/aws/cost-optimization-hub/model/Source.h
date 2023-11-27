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
  enum class Source
  {
    NOT_SET,
    ComputeOptimizer,
    CostExplorer
  };

namespace SourceMapper
{
AWS_COSTOPTIMIZATIONHUB_API Source GetSourceForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForSource(Source value);
} // namespace SourceMapper
} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
