/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/PutConferencePreferenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutConferencePreferenceRequest::PutConferencePreferenceRequest() : 
    m_conferencePreferenceHasBeenSet(false)
{
}

Aws::String PutConferencePreferenceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_conferencePreferenceHasBeenSet)
  {
   payload.WithObject("ConferencePreference", m_conferencePreference.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutConferencePreferenceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.PutConferencePreference"));
  return headers;

}




