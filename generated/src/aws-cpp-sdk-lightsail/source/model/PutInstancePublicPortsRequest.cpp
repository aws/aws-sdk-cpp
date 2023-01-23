/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/PutInstancePublicPortsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutInstancePublicPortsRequest::PutInstancePublicPortsRequest() : 
    m_portInfosHasBeenSet(false),
    m_instanceNameHasBeenSet(false)
{
}

Aws::String PutInstancePublicPortsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_portInfosHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> portInfosJsonList(m_portInfos.size());
   for(unsigned portInfosIndex = 0; portInfosIndex < portInfosJsonList.GetLength(); ++portInfosIndex)
   {
     portInfosJsonList[portInfosIndex].AsObject(m_portInfos[portInfosIndex].Jsonize());
   }
   payload.WithArray("portInfos", std::move(portInfosJsonList));

  }

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutInstancePublicPortsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.PutInstancePublicPorts"));
  return headers;

}




