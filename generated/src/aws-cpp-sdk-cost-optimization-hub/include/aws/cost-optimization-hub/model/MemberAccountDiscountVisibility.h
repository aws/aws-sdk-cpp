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
  enum class MemberAccountDiscountVisibility
  {
    NOT_SET,
    All,
    None
  };

namespace MemberAccountDiscountVisibilityMapper
{
AWS_COSTOPTIMIZATIONHUB_API MemberAccountDiscountVisibility GetMemberAccountDiscountVisibilityForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForMemberAccountDiscountVisibility(MemberAccountDiscountVisibility value);
} // namespace MemberAccountDiscountVisibilityMapper
} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
