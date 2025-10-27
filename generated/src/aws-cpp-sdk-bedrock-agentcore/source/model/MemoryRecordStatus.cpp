/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MemoryRecordStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace MemoryRecordStatusMapper {

static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

MemoryRecordStatus GetMemoryRecordStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUCCEEDED_HASH) {
    return MemoryRecordStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return MemoryRecordStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MemoryRecordStatus>(hashCode);
  }

  return MemoryRecordStatus::NOT_SET;
}

Aws::String GetNameForMemoryRecordStatus(MemoryRecordStatus enumValue) {
  switch (enumValue) {
    case MemoryRecordStatus::NOT_SET:
      return {};
    case MemoryRecordStatus::SUCCEEDED:
      return "SUCCEEDED";
    case MemoryRecordStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MemoryRecordStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
