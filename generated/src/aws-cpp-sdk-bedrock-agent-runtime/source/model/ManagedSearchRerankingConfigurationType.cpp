/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ManagedSearchRerankingConfigurationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace ManagedSearchRerankingConfigurationTypeMapper {

static const int BEDROCK_RERANKING_MODEL_HASH = HashingUtils::HashString("BEDROCK_RERANKING_MODEL");

ManagedSearchRerankingConfigurationType GetManagedSearchRerankingConfigurationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BEDROCK_RERANKING_MODEL_HASH) {
    return ManagedSearchRerankingConfigurationType::BEDROCK_RERANKING_MODEL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedSearchRerankingConfigurationType>(hashCode);
  }

  return ManagedSearchRerankingConfigurationType::NOT_SET;
}

Aws::String GetNameForManagedSearchRerankingConfigurationType(ManagedSearchRerankingConfigurationType enumValue) {
  switch (enumValue) {
    case ManagedSearchRerankingConfigurationType::NOT_SET:
      return {};
    case ManagedSearchRerankingConfigurationType::BEDROCK_RERANKING_MODEL:
      return "BEDROCK_RERANKING_MODEL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedSearchRerankingConfigurationTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
