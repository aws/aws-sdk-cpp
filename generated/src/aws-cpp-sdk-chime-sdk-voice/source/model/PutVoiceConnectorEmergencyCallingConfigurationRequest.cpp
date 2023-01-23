/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PutVoiceConnectorEmergencyCallingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutVoiceConnectorEmergencyCallingConfigurationRequest::PutVoiceConnectorEmergencyCallingConfigurationRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_emergencyCallingConfigurationHasBeenSet(false)
{
}

Aws::String PutVoiceConnectorEmergencyCallingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emergencyCallingConfigurationHasBeenSet)
  {
   payload.WithObject("EmergencyCallingConfiguration", m_emergencyCallingConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




