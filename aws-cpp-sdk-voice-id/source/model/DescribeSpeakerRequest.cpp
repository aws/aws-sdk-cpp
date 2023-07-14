/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/DescribeSpeakerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VoiceID::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSpeakerRequest::DescribeSpeakerRequest() : 
    m_domainIdHasBeenSet(false),
    m_speakerIdHasBeenSet(false)
{
}

Aws::String DescribeSpeakerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_speakerIdHasBeenSet)
  {
   payload.WithString("SpeakerId", m_speakerId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSpeakerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VoiceID.DescribeSpeaker"));
  return headers;

}




