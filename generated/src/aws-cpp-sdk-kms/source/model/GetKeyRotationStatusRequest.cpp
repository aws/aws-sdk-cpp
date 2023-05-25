/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GetKeyRotationStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetKeyRotationStatusRequest::GetKeyRotationStatusRequest() : 
    m_keyIdHasBeenSet(false)
{
}

Aws::String GetKeyRotationStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetKeyRotationStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.GetKeyRotationStatus"));
  return headers;

}




