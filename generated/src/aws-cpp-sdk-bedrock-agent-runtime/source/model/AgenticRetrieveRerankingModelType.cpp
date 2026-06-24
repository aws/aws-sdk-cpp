/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveRerankingModelType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace AgenticRetrieveRerankingModelTypeMapper {

static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");
static const int NONE_HASH = HashingUtils::HashString("NONE");

AgenticRetrieveRerankingModelType GetAgenticRetrieveRerankingModelTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOM_HASH) {
    return AgenticRetrieveRerankingModelType::CUSTOM;
  } else if (hashCode == MANAGED_HASH) {
    return AgenticRetrieveRerankingModelType::MANAGED;
  } else if (hashCode == NONE_HASH) {
    return AgenticRetrieveRerankingModelType::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgenticRetrieveRerankingModelType>(hashCode);
  }

  return AgenticRetrieveRerankingModelType::NOT_SET;
}

Aws::String GetNameForAgenticRetrieveRerankingModelType(AgenticRetrieveRerankingModelType enumValue) {
  switch (enumValue) {
    case AgenticRetrieveRerankingModelType::NOT_SET:
      return {};
    case AgenticRetrieveRerankingModelType::CUSTOM:
      return "CUSTOM";
    case AgenticRetrieveRerankingModelType::MANAGED:
      return "MANAGED";
    case AgenticRetrieveRerankingModelType::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgenticRetrieveRerankingModelTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
