/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/UpdateThingRuntimeConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateThingRuntimeConfigurationRequest::UpdateThingRuntimeConfigurationRequest() : 
    m_telemetryConfigurationHasBeenSet(false),
    m_thingNameHasBeenSet(false)
{
}

Aws::String UpdateThingRuntimeConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_telemetryConfigurationHasBeenSet)
  {
   payload.WithObject("TelemetryConfiguration", m_telemetryConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




