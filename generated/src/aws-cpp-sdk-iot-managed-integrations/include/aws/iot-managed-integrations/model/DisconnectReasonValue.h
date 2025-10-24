﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {
enum class DisconnectReasonValue {
  NOT_SET,
  AUTH_ERROR,
  CLIENT_INITIATED_DISCONNECT,
  CLIENT_ERROR,
  CONNECTION_LOST,
  DUPLICATE_CLIENTID,
  FORBIDDEN_ACCESS,
  MQTT_KEEP_ALIVE_TIMEOUT,
  SERVER_ERROR,
  SERVER_INITIATED_DISCONNECT,
  THROTTLED,
  WEBSOCKET_TTL_EXPIRATION,
  CUSTOMAUTH_TTL_EXPIRATION,
  UNKNOWN,
  NONE
};

namespace DisconnectReasonValueMapper {
AWS_IOTMANAGEDINTEGRATIONS_API DisconnectReasonValue GetDisconnectReasonValueForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForDisconnectReasonValue(DisconnectReasonValue value);
}  // namespace DisconnectReasonValueMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
