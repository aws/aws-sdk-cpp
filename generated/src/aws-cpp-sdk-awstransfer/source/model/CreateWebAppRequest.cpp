/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CreateWebAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWebAppRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityProviderDetailsHasBeenSet)
  {
   payload.WithObject("IdentityProviderDetails", m_identityProviderDetails.Jsonize());

  }

  if(m_accessEndpointHasBeenSet)
  {
   payload.WithString("AccessEndpoint", m_accessEndpoint);

  }

  if(m_webAppUnitsHasBeenSet)
  {
   payload.WithObject("WebAppUnits", m_webAppUnits.Jsonize());

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

  if(m_webAppEndpointPolicyHasBeenSet)
  {
   payload.WithString("WebAppEndpointPolicy", WebAppEndpointPolicyMapper::GetNameForWebAppEndpointPolicy(m_webAppEndpointPolicy));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateWebAppRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.CreateWebApp"));
  return headers;

}




