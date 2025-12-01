/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class FilterV2StringConditionComparisonOperator { NOT_SET, NOT_EXISTS };

namespace FilterV2StringConditionComparisonOperatorMapper {
AWS_CONNECT_API FilterV2StringConditionComparisonOperator GetFilterV2StringConditionComparisonOperatorForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForFilterV2StringConditionComparisonOperator(FilterV2StringConditionComparisonOperator value);
}  // namespace FilterV2StringConditionComparisonOperatorMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
