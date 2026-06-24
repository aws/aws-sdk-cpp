/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FoundationModelConfigurationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace FoundationModelConfigurationTypeMapper {

static const int BEDROCK_FOUNDATION_MODEL_HASH = HashingUtils::HashString("BEDROCK_FOUNDATION_MODEL");

FoundationModelConfigurationType GetFoundationModelConfigurationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BEDROCK_FOUNDATION_MODEL_HASH) {
    return FoundationModelConfigurationType::BEDROCK_FOUNDATION_MODEL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FoundationModelConfigurationType>(hashCode);
  }

  return FoundationModelConfigurationType::NOT_SET;
}

Aws::String GetNameForFoundationModelConfigurationType(FoundationModelConfigurationType enumValue) {
  switch (enumValue) {
    case FoundationModelConfigurationType::NOT_SET:
      return {};
    case FoundationModelConfigurationType::BEDROCK_FOUNDATION_MODEL:
      return "BEDROCK_FOUNDATION_MODEL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FoundationModelConfigurationTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
