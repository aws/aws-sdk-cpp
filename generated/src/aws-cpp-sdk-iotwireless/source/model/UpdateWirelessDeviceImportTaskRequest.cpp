/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateWirelessDeviceImportTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWirelessDeviceImportTaskRequest::UpdateWirelessDeviceImportTaskRequest() : 
    m_idHasBeenSet(false),
    m_sidewalkHasBeenSet(false)
{
}

Aws::String UpdateWirelessDeviceImportTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sidewalkHasBeenSet)
  {
   payload.WithObject("Sidewalk", m_sidewalk.Jsonize());

  }

  return payload.View().WriteReadable();
}




