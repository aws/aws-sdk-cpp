/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GatewayInterceptionPoint.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace GatewayInterceptionPointMapper {

static const int REQUEST_HASH = HashingUtils::HashString("REQUEST");
static const int RESPONSE_HASH = HashingUtils::HashString("RESPONSE");

GatewayInterceptionPoint GetGatewayInterceptionPointForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUEST_HASH) {
    return GatewayInterceptionPoint::REQUEST;
  } else if (hashCode == RESPONSE_HASH) {
    return GatewayInterceptionPoint::RESPONSE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GatewayInterceptionPoint>(hashCode);
  }

  return GatewayInterceptionPoint::NOT_SET;
}

Aws::String GetNameForGatewayInterceptionPoint(GatewayInterceptionPoint enumValue) {
  switch (enumValue) {
    case GatewayInterceptionPoint::NOT_SET:
      return {};
    case GatewayInterceptionPoint::REQUEST:
      return "REQUEST";
    case GatewayInterceptionPoint::RESPONSE:
      return "RESPONSE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GatewayInterceptionPointMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
