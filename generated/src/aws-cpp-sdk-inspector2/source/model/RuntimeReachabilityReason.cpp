/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/RuntimeReachabilityReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace RuntimeReachabilityReasonMapper {

static const int PACKAGE_IN_DOCKERFILE_WORKLOAD_PATH_HASH = HashingUtils::HashString("PACKAGE_IN_DOCKERFILE_WORKLOAD_PATH");
static const int PACKAGE_NOT_IN_DOCKERFILE_WORKLOAD_PATH_HASH = HashingUtils::HashString("PACKAGE_NOT_IN_DOCKERFILE_WORKLOAD_PATH");
static const int PROCESS_OBSERVED_IN_EC2_RUNTIME_HASH = HashingUtils::HashString("PROCESS_OBSERVED_IN_EC2_RUNTIME");
static const int PROCESS_NOT_OBSERVED_IN_EC2_RUNTIME_HASH = HashingUtils::HashString("PROCESS_NOT_OBSERVED_IN_EC2_RUNTIME");

RuntimeReachabilityReason GetRuntimeReachabilityReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PACKAGE_IN_DOCKERFILE_WORKLOAD_PATH_HASH) {
    return RuntimeReachabilityReason::PACKAGE_IN_DOCKERFILE_WORKLOAD_PATH;
  } else if (hashCode == PACKAGE_NOT_IN_DOCKERFILE_WORKLOAD_PATH_HASH) {
    return RuntimeReachabilityReason::PACKAGE_NOT_IN_DOCKERFILE_WORKLOAD_PATH;
  } else if (hashCode == PROCESS_OBSERVED_IN_EC2_RUNTIME_HASH) {
    return RuntimeReachabilityReason::PROCESS_OBSERVED_IN_EC2_RUNTIME;
  } else if (hashCode == PROCESS_NOT_OBSERVED_IN_EC2_RUNTIME_HASH) {
    return RuntimeReachabilityReason::PROCESS_NOT_OBSERVED_IN_EC2_RUNTIME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuntimeReachabilityReason>(hashCode);
  }

  return RuntimeReachabilityReason::NOT_SET;
}

Aws::String GetNameForRuntimeReachabilityReason(RuntimeReachabilityReason enumValue) {
  switch (enumValue) {
    case RuntimeReachabilityReason::NOT_SET:
      return {};
    case RuntimeReachabilityReason::PACKAGE_IN_DOCKERFILE_WORKLOAD_PATH:
      return "PACKAGE_IN_DOCKERFILE_WORKLOAD_PATH";
    case RuntimeReachabilityReason::PACKAGE_NOT_IN_DOCKERFILE_WORKLOAD_PATH:
      return "PACKAGE_NOT_IN_DOCKERFILE_WORKLOAD_PATH";
    case RuntimeReachabilityReason::PROCESS_OBSERVED_IN_EC2_RUNTIME:
      return "PROCESS_OBSERVED_IN_EC2_RUNTIME";
    case RuntimeReachabilityReason::PROCESS_NOT_OBSERVED_IN_EC2_RUNTIME:
      return "PROCESS_NOT_OBSERVED_IN_EC2_RUNTIME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuntimeReachabilityReasonMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
