/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/UpdateWebAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWebAppRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_webAppIdHasBeenSet)
  {
   payload.WithString("WebAppId", m_webAppId);

  }

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateWebAppRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.UpdateWebApp"));
  return headers;

}




