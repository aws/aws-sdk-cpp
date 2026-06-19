/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RerankingModelType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace RerankingModelTypeMapper {

static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");
static const int NONE_HASH = HashingUtils::HashString("NONE");

RerankingModelType GetRerankingModelTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOM_HASH) {
    return RerankingModelType::CUSTOM;
  } else if (hashCode == MANAGED_HASH) {
    return RerankingModelType::MANAGED;
  } else if (hashCode == NONE_HASH) {
    return RerankingModelType::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RerankingModelType>(hashCode);
  }

  return RerankingModelType::NOT_SET;
}

Aws::String GetNameForRerankingModelType(RerankingModelType enumValue) {
  switch (enumValue) {
    case RerankingModelType::NOT_SET:
      return {};
    case RerankingModelType::CUSTOM:
      return "CUSTOM";
    case RerankingModelType::MANAGED:
      return "MANAGED";
    case RerankingModelType::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RerankingModelTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
