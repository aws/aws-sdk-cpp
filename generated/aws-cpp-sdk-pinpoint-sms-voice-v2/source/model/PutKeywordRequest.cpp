/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PutKeywordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutKeywordRequest::PutKeywordRequest() : 
    m_originationIdentityHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_keywordMessageHasBeenSet(false),
    m_keywordAction(KeywordAction::NOT_SET),
    m_keywordActionHasBeenSet(false)
{
}

Aws::String PutKeywordRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_originationIdentityHasBeenSet)
  {
   payload.WithString("OriginationIdentity", m_originationIdentity);

  }

  if(m_keywordHasBeenSet)
  {
   payload.WithString("Keyword", m_keyword);

  }

  if(m_keywordMessageHasBeenSet)
  {
   payload.WithString("KeywordMessage", m_keywordMessage);

  }

  if(m_keywordActionHasBeenSet)
  {
   payload.WithString("KeywordAction", KeywordActionMapper::GetNameForKeywordAction(m_keywordAction));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutKeywordRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.PutKeyword"));
  return headers;

}




