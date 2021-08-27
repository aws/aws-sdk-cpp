/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/CreateWirelessGatewayTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWirelessGatewayTaskRequest::CreateWirelessGatewayTaskRequest() : 
    m_idHasBeenSet(false),
    m_wirelessGatewayTaskDefinitionIdHasBeenSet(false)
{
}

Aws::String CreateWirelessGatewayTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_wirelessGatewayTaskDefinitionIdHasBeenSet)
  {
   payload.WithString("WirelessGatewayTaskDefinitionId", m_wirelessGatewayTaskDefinitionId);

  }

  return payload.View().WriteReadable();
}




