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
  enum class AsgType
  {
    NOT_SET,
    SingleInstanceType,
    MixedInstanceTypes
  };

namespace AsgTypeMapper
{
AWS_COMPUTEOPTIMIZER_API AsgType GetAsgTypeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForAsgType(AsgType value);
} // namespace AsgTypeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
