/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> privateSkillIdsJsonList(m_privateSkillIds.size());
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




