/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AttachStaticIpRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AttachStaticIpRequest::AttachStaticIpRequest() : 
    m_staticIpNameHasBeenSet(false),
    m_instanceNameHasBeenSet(false)
{
}

Aws::String AttachStaticIpRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_staticIpNameHasBeenSet)
  {
   payload.WithString("staticIpName", m_staticIpName);

  }

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AttachStaticIpRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.AttachStaticIp"));
  return headers;

}




