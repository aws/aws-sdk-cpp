/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsecuretunneling/model/DescribeTunnelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSecureTunneling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTunnelRequest::DescribeTunnelRequest() : 
    m_tunnelIdHasBeenSet(false)
{
}

Aws::String DescribeTunnelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tunnelIdHasBeenSet)
  {
   payload.WithString("tunnelId", m_tunnelId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTunnelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTSecuredTunneling.DescribeTunnel"));
  return headers;

}




