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
enum class RuntimeReachability { NOT_SET, REACHABLE, NOT_REACHABLE, UNKNOWN };

namespace RuntimeReachabilityMapper {
AWS_INSPECTOR2_API RuntimeReachability GetRuntimeReachabilityForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForRuntimeReachability(RuntimeReachability value);
}  // namespace RuntimeReachabilityMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
