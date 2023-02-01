/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetInstanceAccessDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetInstanceAccessDetailsRequest::GetInstanceAccessDetailsRequest() : 
    m_instanceNameHasBeenSet(false),
    m_protocol(InstanceAccessProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
}

Aws::String GetInstanceAccessDetailsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", InstanceAccessProtocolMapper::GetNameForInstanceAccessProtocol(m_protocol));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetInstanceAccessDetailsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetInstanceAccessDetails"));
  return headers;

}




