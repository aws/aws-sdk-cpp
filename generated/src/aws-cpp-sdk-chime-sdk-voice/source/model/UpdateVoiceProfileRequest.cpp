/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/UpdateVoiceProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVoiceProfileRequest::UpdateVoiceProfileRequest() : 
    m_voiceProfileIdHasBeenSet(false),
    m_speakerSearchTaskIdHasBeenSet(false)
{
}

Aws::String UpdateVoiceProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_speakerSearchTaskIdHasBeenSet)
  {
   payload.WithString("SpeakerSearchTaskId", m_speakerSearchTaskId);

  }

  return payload.View().WriteReadable();
}




