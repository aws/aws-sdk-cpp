/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/NetworkProtocolEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace NetworkProtocolEnumMapper {

static const int http_HASH = HashingUtils::HashString("http");
static const int https_HASH = HashingUtils::HashString("https");

NetworkProtocolEnum GetNetworkProtocolEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == http_HASH) {
    return NetworkProtocolEnum::http;
  } else if (hashCode == https_HASH) {
    return NetworkProtocolEnum::https;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkProtocolEnum>(hashCode);
  }

  return NetworkProtocolEnum::NOT_SET;
}

Aws::String GetNameForNetworkProtocolEnum(NetworkProtocolEnum enumValue) {
  switch (enumValue) {
    case NetworkProtocolEnum::NOT_SET:
      return {};
    case NetworkProtocolEnum::http:
      return "http";
    case NetworkProtocolEnum::https:
      return "https";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkProtocolEnumMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
