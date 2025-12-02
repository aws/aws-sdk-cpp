/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GatewayPolicyEngineMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace GatewayPolicyEngineModeMapper {

static const int LOG_ONLY_HASH = HashingUtils::HashString("LOG_ONLY");
static const int ENFORCE_HASH = HashingUtils::HashString("ENFORCE");

GatewayPolicyEngineMode GetGatewayPolicyEngineModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LOG_ONLY_HASH) {
    return GatewayPolicyEngineMode::LOG_ONLY;
  } else if (hashCode == ENFORCE_HASH) {
    return GatewayPolicyEngineMode::ENFORCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GatewayPolicyEngineMode>(hashCode);
  }

  return GatewayPolicyEngineMode::NOT_SET;
}

Aws::String GetNameForGatewayPolicyEngineMode(GatewayPolicyEngineMode enumValue) {
  switch (enumValue) {
    case GatewayPolicyEngineMode::NOT_SET:
      return {};
    case GatewayPolicyEngineMode::LOG_ONLY:
      return "LOG_ONLY";
    case GatewayPolicyEngineMode::ENFORCE:
      return "ENFORCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GatewayPolicyEngineModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
