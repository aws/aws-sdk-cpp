/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/BlueprintOptimizationJobStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
namespace BlueprintOptimizationJobStatusMapper {

static const int Created_HASH = HashingUtils::HashString("Created");
static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Success_HASH = HashingUtils::HashString("Success");
static const int ServiceError_HASH = HashingUtils::HashString("ServiceError");
static const int ClientError_HASH = HashingUtils::HashString("ClientError");

BlueprintOptimizationJobStatus GetBlueprintOptimizationJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Created_HASH) {
    return BlueprintOptimizationJobStatus::Created;
  } else if (hashCode == InProgress_HASH) {
    return BlueprintOptimizationJobStatus::InProgress;
  } else if (hashCode == Success_HASH) {
    return BlueprintOptimizationJobStatus::Success;
  } else if (hashCode == ServiceError_HASH) {
    return BlueprintOptimizationJobStatus::ServiceError;
  } else if (hashCode == ClientError_HASH) {
    return BlueprintOptimizationJobStatus::ClientError;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BlueprintOptimizationJobStatus>(hashCode);
  }

  return BlueprintOptimizationJobStatus::NOT_SET;
}

Aws::String GetNameForBlueprintOptimizationJobStatus(BlueprintOptimizationJobStatus enumValue) {
  switch (enumValue) {
    case BlueprintOptimizationJobStatus::NOT_SET:
      return {};
    case BlueprintOptimizationJobStatus::Created:
      return "Created";
    case BlueprintOptimizationJobStatus::InProgress:
      return "InProgress";
    case BlueprintOptimizationJobStatus::Success:
      return "Success";
    case BlueprintOptimizationJobStatus::ServiceError:
      return "ServiceError";
    case BlueprintOptimizationJobStatus::ClientError:
      return "ClientError";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BlueprintOptimizationJobStatusMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
