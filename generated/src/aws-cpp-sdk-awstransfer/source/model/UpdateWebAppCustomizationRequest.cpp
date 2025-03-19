/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/UpdateWebAppCustomizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWebAppCustomizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_webAppIdHasBeenSet)
  {
   payload.WithString("WebAppId", m_webAppId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_logoFileHasBeenSet)
  {
   payload.WithString("LogoFile", HashingUtils::Base64Encode(m_logoFile));
  }

  if(m_faviconFileHasBeenSet)
  {
   payload.WithString("FaviconFile", HashingUtils::Base64Encode(m_faviconFile));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateWebAppCustomizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.UpdateWebAppCustomization"));
  return headers;

}




