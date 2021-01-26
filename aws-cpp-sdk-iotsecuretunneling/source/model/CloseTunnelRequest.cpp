/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsecuretunneling/model/CloseTunnelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSecureTunneling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CloseTunnelRequest::CloseTunnelRequest() : 
    m_tunnelIdHasBeenSet(false),
    m_delete(false),
    m_deleteHasBeenSet(false)
{
}

Aws::String CloseTunnelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tunnelIdHasBeenSet)
  {
   payload.WithString("tunnelId", m_tunnelId);

  }

  if(m_deleteHasBeenSet)
  {
   payload.WithBool("delete", m_delete);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CloseTunnelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTSecuredTunneling.CloseTunnel"));
  return headers;

}




