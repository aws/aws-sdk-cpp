/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/ComputeNodeExecutionState.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace ComputeNodeExecutionStateMapper {

static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ComputeNodeExecutionState GetComputeNodeExecutionStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NOT_STARTED_HASH) {
    return ComputeNodeExecutionState::NOT_STARTED;
  } else if (hashCode == QUEUED_HASH) {
    return ComputeNodeExecutionState::QUEUED;
  } else if (hashCode == RUNNING_HASH) {
    return ComputeNodeExecutionState::RUNNING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return ComputeNodeExecutionState::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return ComputeNodeExecutionState::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ComputeNodeExecutionState>(hashCode);
  }

  return ComputeNodeExecutionState::NOT_SET;
}

Aws::String GetNameForComputeNodeExecutionState(ComputeNodeExecutionState enumValue) {
  switch (enumValue) {
    case ComputeNodeExecutionState::NOT_SET:
      return {};
    case ComputeNodeExecutionState::NOT_STARTED:
      return "NOT_STARTED";
    case ComputeNodeExecutionState::QUEUED:
      return "QUEUED";
    case ComputeNodeExecutionState::RUNNING:
      return "RUNNING";
    case ComputeNodeExecutionState::SUCCEEDED:
      return "SUCCEEDED";
    case ComputeNodeExecutionState::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ComputeNodeExecutionStateMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
