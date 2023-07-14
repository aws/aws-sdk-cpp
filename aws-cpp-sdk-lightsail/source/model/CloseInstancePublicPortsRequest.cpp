/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CloseInstancePublicPortsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CloseInstancePublicPortsRequest::CloseInstancePublicPortsRequest() : 
    m_portInfoHasBeenSet(false),
    m_instanceNameHasBeenSet(false)
{
}

Aws::String CloseInstancePublicPortsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_portInfoHasBeenSet)
  {
   payload.WithObject("portInfo", m_portInfo.Jsonize());

  }

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CloseInstancePublicPortsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CloseInstancePublicPorts"));
  return headers;

}




