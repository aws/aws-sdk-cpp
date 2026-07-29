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
enum class FilterMode { NOT_SET, QUERY_PARAMS, FILTER_STRING };

namespace FilterModeMapper {
AWS_GLUE_API FilterMode GetFilterModeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForFilterMode(FilterMode value);
}  // namespace FilterModeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
