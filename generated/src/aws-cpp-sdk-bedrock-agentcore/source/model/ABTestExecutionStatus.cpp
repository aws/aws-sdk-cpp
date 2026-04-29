/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ABTestExecutionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace ABTestExecutionStatusMapper {

static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");

ABTestExecutionStatus GetABTestExecutionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PAUSED_HASH) {
    return ABTestExecutionStatus::PAUSED;
  } else if (hashCode == RUNNING_HASH) {
    return ABTestExecutionStatus::RUNNING;
  } else if (hashCode == STOPPED_HASH) {
    return ABTestExecutionStatus::STOPPED;
  } else if (hashCode == NOT_STARTED_HASH) {
    return ABTestExecutionStatus::NOT_STARTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ABTestExecutionStatus>(hashCode);
  }

  return ABTestExecutionStatus::NOT_SET;
}

Aws::String GetNameForABTestExecutionStatus(ABTestExecutionStatus enumValue) {
  switch (enumValue) {
    case ABTestExecutionStatus::NOT_SET:
      return {};
    case ABTestExecutionStatus::PAUSED:
      return "PAUSED";
    case ABTestExecutionStatus::RUNNING:
      return "RUNNING";
    case ABTestExecutionStatus::STOPPED:
      return "STOPPED";
    case ABTestExecutionStatus::NOT_STARTED:
      return "NOT_STARTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ABTestExecutionStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
