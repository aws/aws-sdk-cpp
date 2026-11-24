/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Model {
enum class RuntimeReachabilityComparison { NOT_SET, EQUALS, NOT_EQUALS };

namespace RuntimeReachabilityComparisonMapper {
AWS_INSPECTOR2_API RuntimeReachabilityComparison GetRuntimeReachabilityComparisonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForRuntimeReachabilityComparison(RuntimeReachabilityComparison value);
}  // namespace RuntimeReachabilityComparisonMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
