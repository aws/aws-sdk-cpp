/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/WebAppVpcEndpointIpAddressType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {
namespace WebAppVpcEndpointIpAddressTypeMapper {

static const int IPV4_HASH = HashingUtils::HashString("IPV4");
static const int DUALSTACK_HASH = HashingUtils::HashString("DUALSTACK");

WebAppVpcEndpointIpAddressType GetWebAppVpcEndpointIpAddressTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IPV4_HASH) {
    return WebAppVpcEndpointIpAddressType::IPV4;
  } else if (hashCode == DUALSTACK_HASH) {
    return WebAppVpcEndpointIpAddressType::DUALSTACK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WebAppVpcEndpointIpAddressType>(hashCode);
  }

  return WebAppVpcEndpointIpAddressType::NOT_SET;
}

Aws::String GetNameForWebAppVpcEndpointIpAddressType(WebAppVpcEndpointIpAddressType enumValue) {
  switch (enumValue) {
    case WebAppVpcEndpointIpAddressType::NOT_SET:
      return {};
    case WebAppVpcEndpointIpAddressType::IPV4:
      return "IPV4";
    case WebAppVpcEndpointIpAddressType::DUALSTACK:
      return "DUALSTACK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WebAppVpcEndpointIpAddressTypeMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
