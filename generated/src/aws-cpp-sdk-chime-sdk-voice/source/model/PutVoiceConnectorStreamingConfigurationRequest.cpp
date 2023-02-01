/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PutVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutVoiceConnectorStreamingConfigurationRequest::PutVoiceConnectorStreamingConfigurationRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_streamingConfigurationHasBeenSet(false)
{
}

Aws::String PutVoiceConnectorStreamingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamingConfigurationHasBeenSet)
  {
   payload.WithObject("StreamingConfiguration", m_streamingConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




