/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/CreateCustomKeyStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCustomKeyStoreRequest::CreateCustomKeyStoreRequest() : 
    m_customKeyStoreNameHasBeenSet(false),
    m_cloudHsmClusterIdHasBeenSet(false),
    m_trustAnchorCertificateHasBeenSet(false),
    m_keyStorePasswordHasBeenSet(false)
{
}

Aws::String CreateCustomKeyStoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_customKeyStoreNameHasBeenSet)
  {
   payload.WithString("CustomKeyStoreName", m_customKeyStoreName);

  }

  if(m_cloudHsmClusterIdHasBeenSet)
  {
   payload.WithString("CloudHsmClusterId", m_cloudHsmClusterId);

  }

  if(m_trustAnchorCertificateHasBeenSet)
  {
   payload.WithString("TrustAnchorCertificate", m_trustAnchorCertificate);

  }

  if(m_keyStorePasswordHasBeenSet)
  {
   payload.WithString("KeyStorePassword", m_keyStorePassword);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCustomKeyStoreRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.CreateCustomKeyStore"));
  return headers;

}




