/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ConnectorsIpAddressType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {
namespace ConnectorsIpAddressTypeMapper {

static const int IPV4_HASH = HashingUtils::HashString("IPV4");
static const int DUALSTACK_HASH = HashingUtils::HashString("DUALSTACK");

ConnectorsIpAddressType GetConnectorsIpAddressTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IPV4_HASH) {
    return ConnectorsIpAddressType::IPV4;
  } else if (hashCode == DUALSTACK_HASH) {
    return ConnectorsIpAddressType::DUALSTACK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectorsIpAddressType>(hashCode);
  }

  return ConnectorsIpAddressType::NOT_SET;
}

Aws::String GetNameForConnectorsIpAddressType(ConnectorsIpAddressType enumValue) {
  switch (enumValue) {
    case ConnectorsIpAddressType::NOT_SET:
      return {};
    case ConnectorsIpAddressType::IPV4:
      return "IPV4";
    case ConnectorsIpAddressType::DUALSTACK:
      return "DUALSTACK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectorsIpAddressTypeMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
