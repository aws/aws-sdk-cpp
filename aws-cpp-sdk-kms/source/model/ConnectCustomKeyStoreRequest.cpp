/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ConnectCustomKeyStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConnectCustomKeyStoreRequest::ConnectCustomKeyStoreRequest() : 
    m_customKeyStoreIdHasBeenSet(false)
{
}

Aws::String ConnectCustomKeyStoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_customKeyStoreIdHasBeenSet)
  {
   payload.WithString("CustomKeyStoreId", m_customKeyStoreId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ConnectCustomKeyStoreRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.ConnectCustomKeyStore"));
  return headers;

}




