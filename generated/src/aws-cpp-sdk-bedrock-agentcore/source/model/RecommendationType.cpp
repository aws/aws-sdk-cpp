/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/RecommendationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace RecommendationTypeMapper {

static const int SYSTEM_PROMPT_RECOMMENDATION_HASH = HashingUtils::HashString("SYSTEM_PROMPT_RECOMMENDATION");
static const int TOOL_DESCRIPTION_RECOMMENDATION_HASH = HashingUtils::HashString("TOOL_DESCRIPTION_RECOMMENDATION");

RecommendationType GetRecommendationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SYSTEM_PROMPT_RECOMMENDATION_HASH) {
    return RecommendationType::SYSTEM_PROMPT_RECOMMENDATION;
  } else if (hashCode == TOOL_DESCRIPTION_RECOMMENDATION_HASH) {
    return RecommendationType::TOOL_DESCRIPTION_RECOMMENDATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationType>(hashCode);
  }

  return RecommendationType::NOT_SET;
}

Aws::String GetNameForRecommendationType(RecommendationType enumValue) {
  switch (enumValue) {
    case RecommendationType::NOT_SET:
      return {};
    case RecommendationType::SYSTEM_PROMPT_RECOMMENDATION:
      return "SYSTEM_PROMPT_RECOMMENDATION";
    case RecommendationType::TOOL_DESCRIPTION_RECOMMENDATION:
      return "TOOL_DESCRIPTION_RECOMMENDATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
