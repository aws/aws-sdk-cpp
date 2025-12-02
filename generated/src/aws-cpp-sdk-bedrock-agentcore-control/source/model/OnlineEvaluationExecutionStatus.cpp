/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OnlineEvaluationExecutionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace OnlineEvaluationExecutionStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

OnlineEvaluationExecutionStatus GetOnlineEvaluationExecutionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return OnlineEvaluationExecutionStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return OnlineEvaluationExecutionStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OnlineEvaluationExecutionStatus>(hashCode);
  }

  return OnlineEvaluationExecutionStatus::NOT_SET;
}

Aws::String GetNameForOnlineEvaluationExecutionStatus(OnlineEvaluationExecutionStatus enumValue) {
  switch (enumValue) {
    case OnlineEvaluationExecutionStatus::NOT_SET:
      return {};
    case OnlineEvaluationExecutionStatus::ENABLED:
      return "ENABLED";
    case OnlineEvaluationExecutionStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OnlineEvaluationExecutionStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
