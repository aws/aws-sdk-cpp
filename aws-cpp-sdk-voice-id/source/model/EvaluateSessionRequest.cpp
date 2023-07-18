/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/EvaluateSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VoiceID::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EvaluateSessionRequest::EvaluateSessionRequest() : 
    m_domainIdHasBeenSet(false),
    m_sessionNameOrIdHasBeenSet(false)
{
}

Aws::String EvaluateSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_sessionNameOrIdHasBeenSet)
  {
   payload.WithString("SessionNameOrId", m_sessionNameOrId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection EvaluateSessionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VoiceID.EvaluateSession"));
  return headers;

}




