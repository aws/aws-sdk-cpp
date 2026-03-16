/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CommandExecutionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace CommandExecutionStatusMapper {

static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");

CommandExecutionStatus GetCommandExecutionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLETED_HASH) {
    return CommandExecutionStatus::COMPLETED;
  } else if (hashCode == TIMED_OUT_HASH) {
    return CommandExecutionStatus::TIMED_OUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CommandExecutionStatus>(hashCode);
  }

  return CommandExecutionStatus::NOT_SET;
}

Aws::String GetNameForCommandExecutionStatus(CommandExecutionStatus enumValue) {
  switch (enumValue) {
    case CommandExecutionStatus::NOT_SET:
      return {};
    case CommandExecutionStatus::COMPLETED:
      return "COMPLETED";
    case CommandExecutionStatus::TIMED_OUT:
      return "TIMED_OUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CommandExecutionStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
