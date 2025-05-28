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
  enum class Term
  {
    NOT_SET,
    OneYear,
    ThreeYears
  };

namespace TermMapper
{
AWS_COSTOPTIMIZATIONHUB_API Term GetTermForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForTerm(Term value);
} // namespace TermMapper
} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
