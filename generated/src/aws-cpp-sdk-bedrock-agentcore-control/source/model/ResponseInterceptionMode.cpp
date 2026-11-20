/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ResponseInterceptionMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ResponseInterceptionModeMapper {

static const int BUFFERED_HASH = HashingUtils::HashString("BUFFERED");
static const int STREAM_HASH = HashingUtils::HashString("STREAM");

ResponseInterceptionMode GetResponseInterceptionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BUFFERED_HASH) {
    return ResponseInterceptionMode::BUFFERED;
  } else if (hashCode == STREAM_HASH) {
    return ResponseInterceptionMode::STREAM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResponseInterceptionMode>(hashCode);
  }

  return ResponseInterceptionMode::NOT_SET;
}

Aws::String GetNameForResponseInterceptionMode(ResponseInterceptionMode enumValue) {
  switch (enumValue) {
    case ResponseInterceptionMode::NOT_SET:
      return {};
    case ResponseInterceptionMode::BUFFERED:
      return "BUFFERED";
    case ResponseInterceptionMode::STREAM:
      return "STREAM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResponseInterceptionModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
