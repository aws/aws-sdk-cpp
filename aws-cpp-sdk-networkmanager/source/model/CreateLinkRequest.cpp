/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CreateLinkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLinkRequest::CreateLinkRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_siteIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLinkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_bandwidthHasBeenSet)
  {
   payload.WithObject("Bandwidth", m_bandwidth.Jsonize());

  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("Provider", m_provider);

  }

  if(m_siteIdHasBeenSet)
  {
   payload.WithString("SiteId", m_siteId);

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

  return payload.View().WriteReadable();
}




