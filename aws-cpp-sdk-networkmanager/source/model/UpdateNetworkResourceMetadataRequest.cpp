/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/UpdateNetworkResourceMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNetworkResourceMetadataRequest::UpdateNetworkResourceMetadataRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

Aws::String UpdateNetworkResourceMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
   }
   payload.WithObject("Metadata", std::move(metadataJsonMap));

  }

  return payload.View().WriteReadable();
}




