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
enum class RuntimeReachabilityReason {
  NOT_SET,
  PACKAGE_IN_DOCKERFILE_WORKLOAD_PATH,
  PACKAGE_NOT_IN_DOCKERFILE_WORKLOAD_PATH,
  PROCESS_OBSERVED_IN_EC2_RUNTIME,
  PROCESS_NOT_OBSERVED_IN_EC2_RUNTIME
};

namespace RuntimeReachabilityReasonMapper {
AWS_INSPECTOR2_API RuntimeReachabilityReason GetRuntimeReachabilityReasonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForRuntimeReachabilityReason(RuntimeReachabilityReason value);
}  // namespace RuntimeReachabilityReasonMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
