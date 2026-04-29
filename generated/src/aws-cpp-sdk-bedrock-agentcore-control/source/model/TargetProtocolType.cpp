/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/TargetProtocolType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace TargetProtocolTypeMapper {

static const int MCP_HASH = HashingUtils::HashString("MCP");
static const int HTTP_HASH = HashingUtils::HashString("HTTP");

TargetProtocolType GetTargetProtocolTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MCP_HASH) {
    return TargetProtocolType::MCP;
  } else if (hashCode == HTTP_HASH) {
    return TargetProtocolType::HTTP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TargetProtocolType>(hashCode);
  }

  return TargetProtocolType::NOT_SET;
}

Aws::String GetNameForTargetProtocolType(TargetProtocolType enumValue) {
  switch (enumValue) {
    case TargetProtocolType::NOT_SET:
      return {};
    case TargetProtocolType::MCP:
      return "MCP";
    case TargetProtocolType::HTTP:
      return "HTTP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TargetProtocolTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
