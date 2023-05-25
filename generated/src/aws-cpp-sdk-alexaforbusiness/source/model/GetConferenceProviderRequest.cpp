/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/GetConferenceProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetConferenceProviderRequest::GetConferenceProviderRequest() : 
    m_conferenceProviderArnHasBeenSet(false)
{
}

Aws::String GetConferenceProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_conferenceProviderArnHasBeenSet)
  {
   payload.WithString("ConferenceProviderArn", m_conferenceProviderArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetConferenceProviderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.GetConferenceProvider"));
  return headers;

}




