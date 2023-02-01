/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/UpdateProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProfileRequest::UpdateProfileRequest() : 
    m_profileIdHasBeenSet(false),
    m_certificateIdsHasBeenSet(false)
{
}

Aws::String UpdateProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("ProfileId", m_profileId);

  }

  if(m_certificateIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificateIdsJsonList(m_certificateIds.size());
   for(unsigned certificateIdsIndex = 0; certificateIdsIndex < certificateIdsJsonList.GetLength(); ++certificateIdsIndex)
   {
     certificateIdsJsonList[certificateIdsIndex].AsString(m_certificateIds[certificateIdsIndex]);
   }
   payload.WithArray("CertificateIds", std::move(certificateIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.UpdateProfile"));
  return headers;

}




