/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/CreateWirelessGatewayTaskDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWirelessGatewayTaskDefinitionRequest::CreateWirelessGatewayTaskDefinitionRequest() : 
    m_autoCreateTasks(false),
    m_autoCreateTasksHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_updateHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String CreateWirelessGatewayTaskDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoCreateTasksHasBeenSet)
  {
   payload.WithBool("AutoCreateTasks", m_autoCreateTasks);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_updateHasBeenSet)
  {
   payload.WithObject("Update", m_update.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




