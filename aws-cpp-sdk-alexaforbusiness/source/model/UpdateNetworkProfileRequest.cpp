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
   Array<JsonValue> trustAnchorsJsonList(m_trustAnchors.size());
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




