/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PutVoiceConnectorLoggingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutVoiceConnectorLoggingConfigurationRequest::PutVoiceConnectorLoggingConfigurationRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_loggingConfigurationHasBeenSet(false)
{
}

Aws::String PutVoiceConnectorLoggingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loggingConfigurationHasBeenSet)
  {
   payload.WithObject("LoggingConfiguration", m_loggingConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




