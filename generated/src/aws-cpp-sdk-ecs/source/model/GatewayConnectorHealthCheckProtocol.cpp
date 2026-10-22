/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/GatewayConnectorHealthCheckProtocol.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace GatewayConnectorHealthCheckProtocolMapper {

static const int HTTP_HASH = HashingUtils::HashString("HTTP");
static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");

GatewayConnectorHealthCheckProtocol GetGatewayConnectorHealthCheckProtocolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HTTP_HASH) {
    return GatewayConnectorHealthCheckProtocol::HTTP;
  } else if (hashCode == HTTPS_HASH) {
    return GatewayConnectorHealthCheckProtocol::HTTPS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GatewayConnectorHealthCheckProtocol>(hashCode);
  }

  return GatewayConnectorHealthCheckProtocol::NOT_SET;
}

Aws::String GetNameForGatewayConnectorHealthCheckProtocol(GatewayConnectorHealthCheckProtocol enumValue) {
  switch (enumValue) {
    case GatewayConnectorHealthCheckProtocol::NOT_SET:
      return {};
    case GatewayConnectorHealthCheckProtocol::HTTP:
      return "HTTP";
    case GatewayConnectorHealthCheckProtocol::HTTPS:
      return "HTTPS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GatewayConnectorHealthCheckProtocolMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
