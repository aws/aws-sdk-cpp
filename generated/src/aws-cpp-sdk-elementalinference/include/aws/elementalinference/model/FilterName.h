/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
namespace Model {
enum class FilterName { NOT_SET, COMPETITOR };

namespace FilterNameMapper {
AWS_ELEMENTALINFERENCE_API FilterName GetFilterNameForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForFilterName(FilterName value);
}  // namespace FilterNameMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
