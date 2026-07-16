/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/ConnectorHealthStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace ConnectorHealthStatusMapper {

static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
static const int DEGRADED_HASH = HashingUtils::HashString("DEGRADED");
static const int FAILED_TO_CONNECT_HASH = HashingUtils::HashString("FAILED_TO_CONNECT");
static const int PENDING_AUTHORIZATION_HASH = HashingUtils::HashString("PENDING_AUTHORIZATION");
static const int PENDING_CONFIGURATION_HASH = HashingUtils::HashString("PENDING_CONFIGURATION");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

ConnectorHealthStatus GetConnectorHealthStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONNECTED_HASH) {
    return ConnectorHealthStatus::CONNECTED;
  } else if (hashCode == DEGRADED_HASH) {
    return ConnectorHealthStatus::DEGRADED;
  } else if (hashCode == FAILED_TO_CONNECT_HASH) {
    return ConnectorHealthStatus::FAILED_TO_CONNECT;
  } else if (hashCode == PENDING_AUTHORIZATION_HASH) {
    return ConnectorHealthStatus::PENDING_AUTHORIZATION;
  } else if (hashCode == PENDING_CONFIGURATION_HASH) {
    return ConnectorHealthStatus::PENDING_CONFIGURATION;
  } else if (hashCode == UNKNOWN_HASH) {
    return ConnectorHealthStatus::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectorHealthStatus>(hashCode);
  }

  return ConnectorHealthStatus::NOT_SET;
}

Aws::String GetNameForConnectorHealthStatus(ConnectorHealthStatus enumValue) {
  switch (enumValue) {
    case ConnectorHealthStatus::NOT_SET:
      return {};
    case ConnectorHealthStatus::CONNECTED:
      return "CONNECTED";
    case ConnectorHealthStatus::DEGRADED:
      return "DEGRADED";
    case ConnectorHealthStatus::FAILED_TO_CONNECT:
      return "FAILED_TO_CONNECT";
    case ConnectorHealthStatus::PENDING_AUTHORIZATION:
      return "PENDING_AUTHORIZATION";
    case ConnectorHealthStatus::PENDING_CONFIGURATION:
      return "PENDING_CONFIGURATION";
    case ConnectorHealthStatus::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectorHealthStatusMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
