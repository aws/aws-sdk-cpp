/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class CompactionStrategy
  {
    NOT_SET,
    binpack,
    sort,
    z_order
  };

namespace CompactionStrategyMapper
{
AWS_GLUE_API CompactionStrategy GetCompactionStrategyForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForCompactionStrategy(CompactionStrategy value);
} // namespace CompactionStrategyMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
