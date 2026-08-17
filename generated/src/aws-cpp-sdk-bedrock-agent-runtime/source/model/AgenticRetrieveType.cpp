/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace AgenticRetrieveTypeMapper {

static const int BedrockKnowledgeBase_HASH = HashingUtils::HashString("BedrockKnowledgeBase");
static const int BedrockAgentCoreMemory_HASH = HashingUtils::HashString("BedrockAgentCoreMemory");

AgenticRetrieveType GetAgenticRetrieveTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BedrockKnowledgeBase_HASH) {
    return AgenticRetrieveType::BedrockKnowledgeBase;
  } else if (hashCode == BedrockAgentCoreMemory_HASH) {
    return AgenticRetrieveType::BedrockAgentCoreMemory;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgenticRetrieveType>(hashCode);
  }

  return AgenticRetrieveType::NOT_SET;
}

Aws::String GetNameForAgenticRetrieveType(AgenticRetrieveType enumValue) {
  switch (enumValue) {
    case AgenticRetrieveType::NOT_SET:
      return {};
    case AgenticRetrieveType::BedrockKnowledgeBase:
      return "BedrockKnowledgeBase";
    case AgenticRetrieveType::BedrockAgentCoreMemory:
      return "BedrockAgentCoreMemory";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgenticRetrieveTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
