/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elb-proxy/model/ProxyUpdateType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ELBProxy {
namespace Model {
namespace ProxyUpdateTypeMapper {

static const int update_proxy_configuration_HASH = HashingUtils::HashString("update-proxy-configuration");

ProxyUpdateType GetProxyUpdateTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == update_proxy_configuration_HASH) {
    return ProxyUpdateType::update_proxy_configuration;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProxyUpdateType>(hashCode);
  }

  return ProxyUpdateType::NOT_SET;
}

Aws::String GetNameForProxyUpdateType(ProxyUpdateType enumValue) {
  switch (enumValue) {
    case ProxyUpdateType::NOT_SET:
      return {};
    case ProxyUpdateType::update_proxy_configuration:
      return "update-proxy-configuration";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProxyUpdateTypeMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
