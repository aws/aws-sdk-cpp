/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/SendManagedThingCommandRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendManagedThingCommandRequest::SendManagedThingCommandRequest() : 
    m_managedThingIdHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_connectorAssociationIdHasBeenSet(false)
{
}

Aws::String SendManagedThingCommandRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointsJsonList(m_endpoints.size());
   for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
   {
     endpointsJsonList[endpointsIndex].AsObject(m_endpoints[endpointsIndex].Jsonize());
   }
   payload.WithArray("Endpoints", std::move(endpointsJsonList));

  }

  if(m_connectorAssociationIdHasBeenSet)
  {
   payload.WithString("ConnectorAssociationId", m_connectorAssociationId);

  }

  return payload.View().WriteReadable();
}




