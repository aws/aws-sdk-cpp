/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CreateConnectPeerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConnectPeerRequest::CreateConnectPeerRequest() : 
    m_connectAttachmentIdHasBeenSet(false),
    m_coreNetworkAddressHasBeenSet(false),
    m_peerAddressHasBeenSet(false),
    m_bgpOptionsHasBeenSet(false),
    m_insideCidrBlocksHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateConnectPeerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectAttachmentIdHasBeenSet)
  {
   payload.WithString("ConnectAttachmentId", m_connectAttachmentId);

  }

  if(m_coreNetworkAddressHasBeenSet)
  {
   payload.WithString("CoreNetworkAddress", m_coreNetworkAddress);

  }

  if(m_peerAddressHasBeenSet)
  {
   payload.WithString("PeerAddress", m_peerAddress);

  }

  if(m_bgpOptionsHasBeenSet)
  {
   payload.WithObject("BgpOptions", m_bgpOptions.Jsonize());

  }

  if(m_insideCidrBlocksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> insideCidrBlocksJsonList(m_insideCidrBlocks.size());
   for(unsigned insideCidrBlocksIndex = 0; insideCidrBlocksIndex < insideCidrBlocksJsonList.GetLength(); ++insideCidrBlocksIndex)
   {
     insideCidrBlocksJsonList[insideCidrBlocksIndex].AsString(m_insideCidrBlocks[insideCidrBlocksIndex]);
   }
   payload.WithArray("InsideCidrBlocks", std::move(insideCidrBlocksJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




