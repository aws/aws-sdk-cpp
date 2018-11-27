/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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




