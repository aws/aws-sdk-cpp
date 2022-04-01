/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class CRAllocationStrategy
  {
    NOT_SET,
    BEST_FIT,
    BEST_FIT_PROGRESSIVE,
    SPOT_CAPACITY_OPTIMIZED
  };

namespace CRAllocationStrategyMapper
{
AWS_BATCH_API CRAllocationStrategy GetCRAllocationStrategyForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForCRAllocationStrategy(CRAllocationStrategy value);
} // namespace CRAllocationStrategyMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
