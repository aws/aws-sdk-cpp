/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/UpdateCustomKeyStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCustomKeyStoreRequest::UpdateCustomKeyStoreRequest() : 
    m_customKeyStoreIdHasBeenSet(false),
    m_newCustomKeyStoreNameHasBeenSet(false),
    m_keyStorePasswordHasBeenSet(false),
    m_cloudHsmClusterIdHasBeenSet(false)
{
}

Aws::String UpdateCustomKeyStoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_customKeyStoreIdHasBeenSet)
  {
   payload.WithString("CustomKeyStoreId", m_customKeyStoreId);

  }

  if(m_newCustomKeyStoreNameHasBeenSet)
  {
   payload.WithString("NewCustomKeyStoreName", m_newCustomKeyStoreName);

  }

  if(m_keyStorePasswordHasBeenSet)
  {
   payload.WithString("KeyStorePassword", m_keyStorePassword);

  }

  if(m_cloudHsmClusterIdHasBeenSet)
  {
   payload.WithString("CloudHsmClusterId", m_cloudHsmClusterId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCustomKeyStoreRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.UpdateCustomKeyStore"));
  return headers;

}




