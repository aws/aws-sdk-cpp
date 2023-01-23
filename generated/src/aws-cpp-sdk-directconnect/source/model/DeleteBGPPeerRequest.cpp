/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DeleteBGPPeerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteBGPPeerRequest::DeleteBGPPeerRequest() : 
    m_virtualInterfaceIdHasBeenSet(false),
    m_asn(0),
    m_asnHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_bgpPeerIdHasBeenSet(false)
{
}

Aws::String DeleteBGPPeerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_virtualInterfaceIdHasBeenSet)
  {
   payload.WithString("virtualInterfaceId", m_virtualInterfaceId);

  }

  if(m_asnHasBeenSet)
  {
   payload.WithInteger("asn", m_asn);

  }

  if(m_customerAddressHasBeenSet)
  {
   payload.WithString("customerAddress", m_customerAddress);

  }

  if(m_bgpPeerIdHasBeenSet)
  {
   payload.WithString("bgpPeerId", m_bgpPeerId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteBGPPeerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.DeleteBGPPeer"));
  return headers;

}




