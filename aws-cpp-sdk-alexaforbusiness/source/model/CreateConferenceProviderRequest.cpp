/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/CreateConferenceProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConferenceProviderRequest::CreateConferenceProviderRequest() : 
    m_conferenceProviderNameHasBeenSet(false),
    m_conferenceProviderType(ConferenceProviderType::NOT_SET),
    m_conferenceProviderTypeHasBeenSet(false),
    m_iPDialInHasBeenSet(false),
    m_pSTNDialInHasBeenSet(false),
    m_meetingSettingHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateConferenceProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_conferenceProviderNameHasBeenSet)
  {
   payload.WithString("ConferenceProviderName", m_conferenceProviderName);

  }

  if(m_conferenceProviderTypeHasBeenSet)
  {
   payload.WithString("ConferenceProviderType", ConferenceProviderTypeMapper::GetNameForConferenceProviderType(m_conferenceProviderType));
  }

  if(m_iPDialInHasBeenSet)
  {
   payload.WithObject("IPDialIn", m_iPDialIn.Jsonize());

  }

  if(m_pSTNDialInHasBeenSet)
  {
   payload.WithObject("PSTNDialIn", m_pSTNDialIn.Jsonize());

  }

  if(m_meetingSettingHasBeenSet)
  {
   payload.WithObject("MeetingSetting", m_meetingSetting.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateConferenceProviderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.CreateConferenceProvider"));
  return headers;

}




