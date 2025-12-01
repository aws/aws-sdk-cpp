/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/KnowledgeBaseQueryType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace KnowledgeBaseQueryTypeMapper {

static const int TEXT_HASH = HashingUtils::HashString("TEXT");
static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");

KnowledgeBaseQueryType GetKnowledgeBaseQueryTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TEXT_HASH) {
    return KnowledgeBaseQueryType::TEXT;
  } else if (hashCode == IMAGE_HASH) {
    return KnowledgeBaseQueryType::IMAGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<KnowledgeBaseQueryType>(hashCode);
  }

  return KnowledgeBaseQueryType::NOT_SET;
}

Aws::String GetNameForKnowledgeBaseQueryType(KnowledgeBaseQueryType enumValue) {
  switch (enumValue) {
    case KnowledgeBaseQueryType::NOT_SET:
      return {};
    case KnowledgeBaseQueryType::TEXT:
      return "TEXT";
    case KnowledgeBaseQueryType::IMAGE:
      return "IMAGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace KnowledgeBaseQueryTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
