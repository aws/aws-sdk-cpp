/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/StartSpeakerSearchTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSpeakerSearchTaskRequest::StartSpeakerSearchTaskRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_voiceProfileDomainIdHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_callLeg(CallLegType::NOT_SET),
    m_callLegHasBeenSet(false)
{
}

Aws::String StartSpeakerSearchTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  if(m_voiceProfileDomainIdHasBeenSet)
  {
   payload.WithString("VoiceProfileDomainId", m_voiceProfileDomainId);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_callLegHasBeenSet)
  {
   payload.WithString("CallLeg", CallLegTypeMapper::GetNameForCallLegType(m_callLeg));
  }

  return payload.View().WriteReadable();
}




