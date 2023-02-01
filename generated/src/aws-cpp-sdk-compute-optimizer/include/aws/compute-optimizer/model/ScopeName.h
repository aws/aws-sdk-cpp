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
  enum class ScopeName
  {
    NOT_SET,
    Organization,
    AccountId,
    ResourceArn
  };

namespace ScopeNameMapper
{
AWS_COMPUTEOPTIMIZER_API ScopeName GetScopeNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForScopeName(ScopeName value);
} // namespace ScopeNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
