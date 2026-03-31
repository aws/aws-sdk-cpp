/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ACM {
namespace Model {
enum class ComparisonOperator { NOT_SET, CONTAINS, EQUALS };

namespace ComparisonOperatorMapper {
AWS_ACM_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
}  // namespace ComparisonOperatorMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
