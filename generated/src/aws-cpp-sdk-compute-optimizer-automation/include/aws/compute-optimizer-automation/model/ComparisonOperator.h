/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
enum class ComparisonOperator {
  NOT_SET,
  StringEquals,
  StringNotEquals,
  StringEqualsIgnoreCase,
  StringNotEqualsIgnoreCase,
  StringLike,
  StringNotLike,
  NumericEquals,
  NumericNotEquals,
  NumericLessThan,
  NumericLessThanEquals,
  NumericGreaterThan,
  NumericGreaterThanEquals
};

namespace ComparisonOperatorMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
}  // namespace ComparisonOperatorMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
