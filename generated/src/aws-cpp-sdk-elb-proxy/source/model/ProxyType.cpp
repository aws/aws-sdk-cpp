/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elb-proxy/model/ProxyType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ELBProxy {
namespace Model {
namespace ProxyTypeMapper {

static const int envoy_HASH = HashingUtils::HashString("envoy");

ProxyType GetProxyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == envoy_HASH) {
    return ProxyType::envoy;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProxyType>(hashCode);
  }

  return ProxyType::NOT_SET;
}

Aws::String GetNameForProxyType(ProxyType enumValue) {
  switch (enumValue) {
    case ProxyType::NOT_SET:
      return {};
    case ProxyType::envoy:
      return "envoy";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProxyTypeMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
