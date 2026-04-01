/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EndpointIpAddressType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace EndpointIpAddressTypeMapper {

static const int IPV4_HASH = HashingUtils::HashString("IPV4");
static const int IPV6_HASH = HashingUtils::HashString("IPV6");

EndpointIpAddressType GetEndpointIpAddressTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IPV4_HASH) {
    return EndpointIpAddressType::IPV4;
  } else if (hashCode == IPV6_HASH) {
    return EndpointIpAddressType::IPV6;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EndpointIpAddressType>(hashCode);
  }

  return EndpointIpAddressType::NOT_SET;
}

Aws::String GetNameForEndpointIpAddressType(EndpointIpAddressType enumValue) {
  switch (enumValue) {
    case EndpointIpAddressType::NOT_SET:
      return {};
    case EndpointIpAddressType::IPV4:
      return "IPV4";
    case EndpointIpAddressType::IPV6:
      return "IPV6";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EndpointIpAddressTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
