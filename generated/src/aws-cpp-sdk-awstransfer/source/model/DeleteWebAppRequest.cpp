/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DeleteWebAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteWebAppRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_webAppIdHasBeenSet)
  {
   payload.WithString("WebAppId", m_webAppId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteWebAppRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.DeleteWebApp"));
  return headers;

}




