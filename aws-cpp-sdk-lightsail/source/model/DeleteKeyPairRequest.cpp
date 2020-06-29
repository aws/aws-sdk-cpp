/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DeleteKeyPairRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteKeyPairRequest::DeleteKeyPairRequest() : 
    m_keyPairNameHasBeenSet(false)
{
}

Aws::String DeleteKeyPairRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyPairNameHasBeenSet)
  {
   payload.WithString("keyPairName", m_keyPairName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteKeyPairRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.DeleteKeyPair"));
  return headers;

}




