/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace AgenticRetrieveStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

AgenticRetrieveStatus GetAgenticRetrieveStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return AgenticRetrieveStatus::IN_PROGRESS;
  } else if (hashCode == SUCCEEDED_HASH) {
    return AgenticRetrieveStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return AgenticRetrieveStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgenticRetrieveStatus>(hashCode);
  }

  return AgenticRetrieveStatus::NOT_SET;
}

Aws::String GetNameForAgenticRetrieveStatus(AgenticRetrieveStatus enumValue) {
  switch (enumValue) {
    case AgenticRetrieveStatus::NOT_SET:
      return {};
    case AgenticRetrieveStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case AgenticRetrieveStatus::SUCCEEDED:
      return "SUCCEEDED";
    case AgenticRetrieveStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgenticRetrieveStatusMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
