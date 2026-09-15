/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ProxyMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {
namespace ProxyModeMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int PROXY_PROTOCOL_V2_ENFORCED_HASH = HashingUtils::HashString("PROXY_PROTOCOL_V2_ENFORCED");

ProxyMode GetProxyModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return ProxyMode::NONE;
  } else if (hashCode == PROXY_PROTOCOL_V2_ENFORCED_HASH) {
    return ProxyMode::PROXY_PROTOCOL_V2_ENFORCED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProxyMode>(hashCode);
  }

  return ProxyMode::NOT_SET;
}

Aws::String GetNameForProxyMode(ProxyMode enumValue) {
  switch (enumValue) {
    case ProxyMode::NOT_SET:
      return {};
    case ProxyMode::NONE:
      return "NONE";
    case ProxyMode::PROXY_PROTOCOL_V2_ENFORCED:
      return "PROXY_PROTOCOL_V2_ENFORCED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProxyModeMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
