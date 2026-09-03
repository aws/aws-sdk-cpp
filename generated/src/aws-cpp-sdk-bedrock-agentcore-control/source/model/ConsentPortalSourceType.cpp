/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ConsentPortalSourceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ConsentPortalSourceTypeMapper {

static const int agentcore_gateway_HASH = HashingUtils::HashString("agentcore-gateway");

ConsentPortalSourceType GetConsentPortalSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == agentcore_gateway_HASH) {
    return ConsentPortalSourceType::agentcore_gateway;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConsentPortalSourceType>(hashCode);
  }

  return ConsentPortalSourceType::NOT_SET;
}

Aws::String GetNameForConsentPortalSourceType(ConsentPortalSourceType enumValue) {
  switch (enumValue) {
    case ConsentPortalSourceType::NOT_SET:
      return {};
    case ConsentPortalSourceType::agentcore_gateway:
      return "agentcore-gateway";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConsentPortalSourceTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
