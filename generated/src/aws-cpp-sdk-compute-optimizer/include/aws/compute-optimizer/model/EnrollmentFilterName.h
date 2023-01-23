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
  enum class EnrollmentFilterName
  {
    NOT_SET,
    Status
  };

namespace EnrollmentFilterNameMapper
{
AWS_COMPUTEOPTIMIZER_API EnrollmentFilterName GetEnrollmentFilterNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForEnrollmentFilterName(EnrollmentFilterName value);
} // namespace EnrollmentFilterNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
