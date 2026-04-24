/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/DescriptorType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace DescriptorTypeMapper {

static const int MCP_HASH = HashingUtils::HashString("MCP");
static const int A2A_HASH = HashingUtils::HashString("A2A");
static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int AGENT_SKILLS_HASH = HashingUtils::HashString("AGENT_SKILLS");

DescriptorType GetDescriptorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MCP_HASH) {
    return DescriptorType::MCP;
  } else if (hashCode == A2A_HASH) {
    return DescriptorType::A2A;
  } else if (hashCode == CUSTOM_HASH) {
    return DescriptorType::CUSTOM;
  } else if (hashCode == AGENT_SKILLS_HASH) {
    return DescriptorType::AGENT_SKILLS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DescriptorType>(hashCode);
  }

  return DescriptorType::NOT_SET;
}

Aws::String GetNameForDescriptorType(DescriptorType enumValue) {
  switch (enumValue) {
    case DescriptorType::NOT_SET:
      return {};
    case DescriptorType::MCP:
      return "MCP";
    case DescriptorType::A2A:
      return "A2A";
    case DescriptorType::CUSTOM:
      return "CUSTOM";
    case DescriptorType::AGENT_SKILLS:
      return "AGENT_SKILLS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DescriptorTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
