/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/UpdatePrimaryRegionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePrimaryRegionRequest::UpdatePrimaryRegionRequest() : 
    m_keyIdHasBeenSet(false),
    m_primaryRegionHasBeenSet(false)
{
}

Aws::String UpdatePrimaryRegionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_primaryRegionHasBeenSet)
  {
   payload.WithString("PrimaryRegion", m_primaryRegion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePrimaryRegionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.UpdatePrimaryRegion"));
  return headers;

}




