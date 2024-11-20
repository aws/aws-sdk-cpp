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
  enum class IdleFinding
  {
    NOT_SET,
    Idle,
    Unattached
  };

namespace IdleFindingMapper
{
AWS_COMPUTEOPTIMIZER_API IdleFinding GetIdleFindingForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForIdleFinding(IdleFinding value);
} // namespace IdleFindingMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
