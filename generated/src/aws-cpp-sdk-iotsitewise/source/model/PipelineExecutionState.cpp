/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/PipelineExecutionState.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace PipelineExecutionStateMapper {

static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");

PipelineExecutionState GetPipelineExecutionStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NOT_STARTED_HASH) {
    return PipelineExecutionState::NOT_STARTED;
  } else if (hashCode == RUNNING_HASH) {
    return PipelineExecutionState::RUNNING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return PipelineExecutionState::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return PipelineExecutionState::FAILED;
  } else if (hashCode == CANCELLING_HASH) {
    return PipelineExecutionState::CANCELLING;
  } else if (hashCode == CANCELLED_HASH) {
    return PipelineExecutionState::CANCELLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PipelineExecutionState>(hashCode);
  }

  return PipelineExecutionState::NOT_SET;
}

Aws::String GetNameForPipelineExecutionState(PipelineExecutionState enumValue) {
  switch (enumValue) {
    case PipelineExecutionState::NOT_SET:
      return {};
    case PipelineExecutionState::NOT_STARTED:
      return "NOT_STARTED";
    case PipelineExecutionState::RUNNING:
      return "RUNNING";
    case PipelineExecutionState::SUCCEEDED:
      return "SUCCEEDED";
    case PipelineExecutionState::FAILED:
      return "FAILED";
    case PipelineExecutionState::CANCELLING:
      return "CANCELLING";
    case PipelineExecutionState::CANCELLED:
      return "CANCELLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PipelineExecutionStateMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
