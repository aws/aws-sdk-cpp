/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/UpdateEventLogConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateEventLogConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventLogLevelHasBeenSet)
  {
   payload.WithString("EventLogLevel", LogLevelMapper::GetNameForLogLevel(m_eventLogLevel));
  }

  return payload.View().WriteReadable();
}




