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
  enum class CRUpdateAllocationStrategy
  {
    NOT_SET,
    BEST_FIT_PROGRESSIVE,
    SPOT_CAPACITY_OPTIMIZED,
    SPOT_PRICE_CAPACITY_OPTIMIZED
  };

namespace CRUpdateAllocationStrategyMapper
{
AWS_BATCH_API CRUpdateAllocationStrategy GetCRUpdateAllocationStrategyForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForCRUpdateAllocationStrategy(CRUpdateAllocationStrategy value);
} // namespace CRUpdateAllocationStrategyMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
