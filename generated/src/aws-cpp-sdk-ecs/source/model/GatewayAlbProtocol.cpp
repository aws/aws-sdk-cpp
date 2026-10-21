/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/GatewayAlbProtocol.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace GatewayAlbProtocolMapper {

static const int HTTP_HASH = HashingUtils::HashString("HTTP");
static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");

GatewayAlbProtocol GetGatewayAlbProtocolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HTTP_HASH) {
    return GatewayAlbProtocol::HTTP;
  } else if (hashCode == HTTPS_HASH) {
    return GatewayAlbProtocol::HTTPS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GatewayAlbProtocol>(hashCode);
  }

  return GatewayAlbProtocol::NOT_SET;
}

Aws::String GetNameForGatewayAlbProtocol(GatewayAlbProtocol enumValue) {
  switch (enumValue) {
    case GatewayAlbProtocol::NOT_SET:
      return {};
    case GatewayAlbProtocol::HTTP:
      return "HTTP";
    case GatewayAlbProtocol::HTTPS:
      return "HTTPS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GatewayAlbProtocolMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
