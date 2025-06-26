/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{
  enum class ConnectorEventOperation
  {
    NOT_SET,
    DEVICE_COMMAND_RESPONSE,
    DEVICE_DISCOVERY,
    DEVICE_EVENT,
    DEVICE_COMMAND_REQUEST
  };

namespace ConnectorEventOperationMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API ConnectorEventOperation GetConnectorEventOperationForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForConnectorEventOperation(ConnectorEventOperation value);
} // namespace ConnectorEventOperationMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
