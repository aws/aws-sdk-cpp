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

#include <aws/alexaforbusiness/model/PutInvitationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutInvitationConfigurationRequest::PutInvitationConfigurationRequest() : 
    m_organizationNameHasBeenSet(false),
    m_contactEmailHasBeenSet(false),
    m_privateSkillIdsHasBeenSet(false)
{
}

Aws::String PutInvitationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationNameHasBeenSet)
  {
   payload.WithString("OrganizationName", m_organizationName);

  }

  if(m_contactEmailHasBeenSet)
  {
   payload.WithString("ContactEmail", m_contactEmail);

  }

  if(m_privateSkillIdsHasBeenSet)
  {
   Array<JsonValue> privateSkillIdsJsonList(m_privateSkillIds.size());
   for(unsigned privateSkillIdsIndex = 0; privateSkillIdsIndex < privateSkillIdsJsonList.GetLength(); ++privateSkillIdsIndex)
   {
     privateSkillIdsJsonList[privateSkillIdsIndex].AsString(m_privateSkillIds[privateSkillIdsIndex]);
   }
   payload.WithArray("PrivateSkillIds", std::move(privateSkillIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutInvitationConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.PutInvitationConfiguration"));
  return headers;

}




