/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PutVoiceConnectorTerminationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutVoiceConnectorTerminationRequest::PutVoiceConnectorTerminationRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_terminationHasBeenSet(false)
{
}

Aws::String PutVoiceConnectorTerminationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_terminationHasBeenSet)
  {
   payload.WithObject("Termination", m_termination.Jsonize());

  }

  return payload.View().WriteReadable();
}




