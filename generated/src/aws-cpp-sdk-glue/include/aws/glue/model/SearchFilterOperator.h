/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class SearchFilterOperator { NOT_SET, equals, greaterThan, greaterThanOrEquals, lessThan, lessThanOrEquals, notExists };

namespace SearchFilterOperatorMapper {
AWS_GLUE_API SearchFilterOperator GetSearchFilterOperatorForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForSearchFilterOperator(SearchFilterOperator value);
}  // namespace SearchFilterOperatorMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
