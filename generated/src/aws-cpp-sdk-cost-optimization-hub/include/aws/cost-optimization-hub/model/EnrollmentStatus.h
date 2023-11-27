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
  enum class EnrollmentStatus
  {
    NOT_SET,
    Active,
    Inactive
  };

namespace EnrollmentStatusMapper
{
AWS_COSTOPTIMIZATIONHUB_API EnrollmentStatus GetEnrollmentStatusForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForEnrollmentStatus(EnrollmentStatus value);
} // namespace EnrollmentStatusMapper
} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
