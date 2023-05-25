/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PutVoiceConnectorOriginationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutVoiceConnectorOriginationRequest::PutVoiceConnectorOriginationRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_originationHasBeenSet(false)
{
}

Aws::String PutVoiceConnectorOriginationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_originationHasBeenSet)
  {
   payload.WithObject("Origination", m_origination.Jsonize());

  }

  return payload.View().WriteReadable();
}




