/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/UpdateNetworkProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNetworkProfileRequest::UpdateNetworkProfileRequest() : 
    m_networkProfileArnHasBeenSet(false),
    m_networkProfileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_currentPasswordHasBeenSet(false),
    m_nextPasswordHasBeenSet(false),
    m_certificateAuthorityArnHasBeenSet(false),
    m_trustAnchorsHasBeenSet(false)
{
}

Aws::String UpdateNetworkProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_networkProfileArnHasBeenSet)
  {
   payload.WithString("NetworkProfileArn", m_networkProfileArn);

  }

  if(m_networkProfileNameHasBeenSet)
  {
   payload.WithString("NetworkProfileName", m_networkProfileName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_currentPasswordHasBeenSet)
  {
   payload.WithString("CurrentPassword", m_currentPassword);

  }

  if(m_nextPasswordHasBeenSet)
  {
   payload.WithString("NextPassword", m_nextPassword);

  }

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_trustAnchorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trustAnchorsJsonList(m_trustAnchors.size());
   for(unsigned trustAnchorsIndex = 0; trustAnchorsIndex < trustAnchorsJsonList.GetLength(); ++trustAnchorsIndex)
   {
     trustAnchorsJsonList[trustAnchorsIndex].AsString(m_trustAnchors[trustAnchorsIndex]);
   }
   payload.WithArray("TrustAnchors", std::move(trustAnchorsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNetworkProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.UpdateNetworkProfile"));
  return headers;

}




