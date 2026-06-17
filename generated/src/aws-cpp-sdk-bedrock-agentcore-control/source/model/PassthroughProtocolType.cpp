/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PassthroughProtocolType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PassthroughProtocolTypeMapper {

static const int MCP_HASH = HashingUtils::HashString("MCP");
static const int A2A_HASH = HashingUtils::HashString("A2A");
static const int INFERENCE_HASH = HashingUtils::HashString("INFERENCE");
static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");

PassthroughProtocolType GetPassthroughProtocolTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MCP_HASH) {
    return PassthroughProtocolType::MCP;
  } else if (hashCode == A2A_HASH) {
    return PassthroughProtocolType::A2A;
  } else if (hashCode == INFERENCE_HASH) {
    return PassthroughProtocolType::INFERENCE;
  } else if (hashCode == CUSTOM_HASH) {
    return PassthroughProtocolType::CUSTOM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PassthroughProtocolType>(hashCode);
  }

  return PassthroughProtocolType::NOT_SET;
}

Aws::String GetNameForPassthroughProtocolType(PassthroughProtocolType enumValue) {
  switch (enumValue) {
    case PassthroughProtocolType::NOT_SET:
      return {};
    case PassthroughProtocolType::MCP:
      return "MCP";
    case PassthroughProtocolType::A2A:
      return "A2A";
    case PassthroughProtocolType::INFERENCE:
      return "INFERENCE";
    case PassthroughProtocolType::CUSTOM:
      return "CUSTOM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PassthroughProtocolTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
