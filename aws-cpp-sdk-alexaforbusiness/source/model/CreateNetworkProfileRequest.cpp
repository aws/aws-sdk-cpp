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

#include <aws/alexaforbusiness/model/CreateNetworkProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNetworkProfileRequest::CreateNetworkProfileRequest() : 
    m_networkProfileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ssidHasBeenSet(false),
    m_securityType(NetworkSecurityType::NOT_SET),
    m_securityTypeHasBeenSet(false),
    m_eapMethod(NetworkEapMethod::NOT_SET),
    m_eapMethodHasBeenSet(false),
    m_currentPasswordHasBeenSet(false),
    m_nextPasswordHasBeenSet(false),
    m_certificateAuthorityArnHasBeenSet(false),
    m_trustAnchorsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String CreateNetworkProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_networkProfileNameHasBeenSet)
  {
   payload.WithString("NetworkProfileName", m_networkProfileName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_ssidHasBeenSet)
  {
   payload.WithString("Ssid", m_ssid);

  }

  if(m_securityTypeHasBeenSet)
  {
   payload.WithString("SecurityType", NetworkSecurityTypeMapper::GetNameForNetworkSecurityType(m_securityType));
  }

  if(m_eapMethodHasBeenSet)
  {
   payload.WithString("EapMethod", NetworkEapMethodMapper::GetNameForNetworkEapMethod(m_eapMethod));
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

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateNetworkProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.CreateNetworkProfile"));
  return headers;

}




