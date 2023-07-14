/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ImportKeyPairRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportKeyPairRequest::ImportKeyPairRequest() : 
    m_keyPairNameHasBeenSet(false),
    m_publicKeyBase64HasBeenSet(false)
{
}

Aws::String ImportKeyPairRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyPairNameHasBeenSet)
  {
   payload.WithString("keyPairName", m_keyPairName);

  }

  if(m_publicKeyBase64HasBeenSet)
  {
   payload.WithString("publicKeyBase64", m_publicKeyBase64);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportKeyPairRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.ImportKeyPair"));
  return headers;

}




