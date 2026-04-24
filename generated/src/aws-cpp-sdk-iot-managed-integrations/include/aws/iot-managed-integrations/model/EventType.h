/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {
enum class EventType {
  NOT_SET,
  DEVICE_COMMAND,
  DEVICE_COMMAND_REQUEST,
  DEVICE_DISCOVERY_STATUS,
  DEVICE_EVENT,
  DEVICE_LIFE_CYCLE,
  DEVICE_STATE,
  DEVICE_OTA,
  DEVICE_WSS,
  CONNECTOR_ASSOCIATION,
  ACCOUNT_ASSOCIATION,
  CONNECTOR_ERROR_REPORT
};

namespace EventTypeMapper {
AWS_IOTMANAGEDINTEGRATIONS_API EventType GetEventTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForEventType(EventType value);
}  // namespace EventTypeMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
