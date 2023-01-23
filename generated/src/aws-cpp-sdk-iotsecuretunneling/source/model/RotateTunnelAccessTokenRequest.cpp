/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsecuretunneling/model/RotateTunnelAccessTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSecureTunneling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RotateTunnelAccessTokenRequest::RotateTunnelAccessTokenRequest() : 
    m_tunnelIdHasBeenSet(false),
    m_clientMode(ClientMode::NOT_SET),
    m_clientModeHasBeenSet(false),
    m_destinationConfigHasBeenSet(false)
{
}

Aws::String RotateTunnelAccessTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tunnelIdHasBeenSet)
  {
   payload.WithString("tunnelId", m_tunnelId);

  }

  if(m_clientModeHasBeenSet)
  {
   payload.WithString("clientMode", ClientModeMapper::GetNameForClientMode(m_clientMode));
  }

  if(m_destinationConfigHasBeenSet)
  {
   payload.WithObject("destinationConfig", m_destinationConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RotateTunnelAccessTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTSecuredTunneling.RotateTunnelAccessToken"));
  return headers;

}




