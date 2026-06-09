/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessBedrockApiFormat.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace HarnessBedrockApiFormatMapper {

static const int converse_stream_HASH = HashingUtils::HashString("converse_stream");
static const int responses_HASH = HashingUtils::HashString("responses");
static const int chat_completions_HASH = HashingUtils::HashString("chat_completions");

HarnessBedrockApiFormat GetHarnessBedrockApiFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == converse_stream_HASH) {
    return HarnessBedrockApiFormat::converse_stream;
  } else if (hashCode == responses_HASH) {
    return HarnessBedrockApiFormat::responses;
  } else if (hashCode == chat_completions_HASH) {
    return HarnessBedrockApiFormat::chat_completions;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HarnessBedrockApiFormat>(hashCode);
  }

  return HarnessBedrockApiFormat::NOT_SET;
}

Aws::String GetNameForHarnessBedrockApiFormat(HarnessBedrockApiFormat enumValue) {
  switch (enumValue) {
    case HarnessBedrockApiFormat::NOT_SET:
      return {};
    case HarnessBedrockApiFormat::converse_stream:
      return "converse_stream";
    case HarnessBedrockApiFormat::responses:
      return "responses";
    case HarnessBedrockApiFormat::chat_completions:
      return "chat_completions";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HarnessBedrockApiFormatMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
