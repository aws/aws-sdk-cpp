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
enum class SearchFilterComparator { NOT_SET, EQUALS, GREATER_THAN, GREATER_THAN_OR_EQUALS, LESS_THAN, LESS_THAN_OR_EQUALS, NOT_EXISTS };

namespace SearchFilterComparatorMapper {
AWS_GLUE_API SearchFilterComparator GetSearchFilterComparatorForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForSearchFilterComparator(SearchFilterComparator value);
}  // namespace SearchFilterComparatorMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
