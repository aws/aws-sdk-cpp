/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessOpenAiApiFormat.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace HarnessOpenAiApiFormatMapper {

static const int chat_completions_HASH = HashingUtils::HashString("chat_completions");
static const int responses_HASH = HashingUtils::HashString("responses");

HarnessOpenAiApiFormat GetHarnessOpenAiApiFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == chat_completions_HASH) {
    return HarnessOpenAiApiFormat::chat_completions;
  } else if (hashCode == responses_HASH) {
    return HarnessOpenAiApiFormat::responses;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HarnessOpenAiApiFormat>(hashCode);
  }

  return HarnessOpenAiApiFormat::NOT_SET;
}

Aws::String GetNameForHarnessOpenAiApiFormat(HarnessOpenAiApiFormat enumValue) {
  switch (enumValue) {
    case HarnessOpenAiApiFormat::NOT_SET:
      return {};
    case HarnessOpenAiApiFormat::chat_completions:
      return "chat_completions";
    case HarnessOpenAiApiFormat::responses:
      return "responses";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HarnessOpenAiApiFormatMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
