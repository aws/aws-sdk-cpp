/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/UpdateConferenceProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConferenceProviderRequest::UpdateConferenceProviderRequest() : 
    m_conferenceProviderArnHasBeenSet(false),
    m_conferenceProviderType(ConferenceProviderType::NOT_SET),
    m_conferenceProviderTypeHasBeenSet(false),
    m_iPDialInHasBeenSet(false),
    m_pSTNDialInHasBeenSet(false),
    m_meetingSettingHasBeenSet(false)
{
}

Aws::String UpdateConferenceProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_conferenceProviderArnHasBeenSet)
  {
   payload.WithString("ConferenceProviderArn", m_conferenceProviderArn);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateConferenceProviderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.UpdateConferenceProvider"));
  return headers;

}




