/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/SourceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace SourceTypeMapper {

static const int AWS_BedrockAgentCore_Runtime_HASH = HashingUtils::HashString("AWS::BedrockAgentCore::Runtime");
static const int AWS_BedrockAgentCore_Gateway_HASH = HashingUtils::HashString("AWS::BedrockAgentCore::Gateway");

SourceType GetSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_BedrockAgentCore_Runtime_HASH) {
    return SourceType::AWS_BedrockAgentCore_Runtime;
  } else if (hashCode == AWS_BedrockAgentCore_Gateway_HASH) {
    return SourceType::AWS_BedrockAgentCore_Gateway;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceType>(hashCode);
  }

  return SourceType::NOT_SET;
}

Aws::String GetNameForSourceType(SourceType enumValue) {
  switch (enumValue) {
    case SourceType::NOT_SET:
      return {};
    case SourceType::AWS_BedrockAgentCore_Runtime:
      return "AWS::BedrockAgentCore::Runtime";
    case SourceType::AWS_BedrockAgentCore_Gateway:
      return "AWS::BedrockAgentCore::Gateway";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceTypeMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
