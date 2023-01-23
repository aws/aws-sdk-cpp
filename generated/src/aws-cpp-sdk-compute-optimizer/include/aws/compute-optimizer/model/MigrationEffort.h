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
  enum class MigrationEffort
  {
    NOT_SET,
    VeryLow,
    Low,
    Medium,
    High
  };

namespace MigrationEffortMapper
{
AWS_COMPUTEOPTIMIZER_API MigrationEffort GetMigrationEffortForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForMigrationEffort(MigrationEffort value);
} // namespace MigrationEffortMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
