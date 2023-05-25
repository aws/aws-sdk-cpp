/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/DeleteTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTokenRequest::DeleteTokenRequest() : 
    m_tokenIdHasBeenSet(false)
{
}

Aws::String DeleteTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tokenIdHasBeenSet)
  {
   payload.WithString("TokenId", m_tokenId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.DeleteToken"));
  return headers;

}




