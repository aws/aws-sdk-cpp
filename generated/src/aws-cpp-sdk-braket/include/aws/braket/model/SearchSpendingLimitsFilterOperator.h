/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Braket {
namespace Model {
enum class SearchSpendingLimitsFilterOperator { NOT_SET, EQUAL };

namespace SearchSpendingLimitsFilterOperatorMapper {
AWS_BRAKET_API SearchSpendingLimitsFilterOperator GetSearchSpendingLimitsFilterOperatorForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForSearchSpendingLimitsFilterOperator(SearchSpendingLimitsFilterOperator value);
}  // namespace SearchSpendingLimitsFilterOperatorMapper
}  // namespace Model
}  // namespace Braket
}  // namespace Aws
