/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CreateProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProfileRequest::CreateProfileRequest() : 
    m_as2IdHasBeenSet(false),
    m_profileType(ProfileType::NOT_SET),
    m_profileTypeHasBeenSet(false),
    m_certificateIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_as2IdHasBeenSet)
  {
   payload.WithString("As2Id", m_as2Id);

  }

  if(m_profileTypeHasBeenSet)
  {
   payload.WithString("ProfileType", ProfileTypeMapper::GetNameForProfileType(m_profileType));
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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.CreateProfile"));
  return headers;

}




