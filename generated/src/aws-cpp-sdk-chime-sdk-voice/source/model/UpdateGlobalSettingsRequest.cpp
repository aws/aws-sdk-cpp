﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/UpdateGlobalSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateGlobalSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_voiceConnectorHasBeenSet)
  {
   payload.WithObject("VoiceConnector", m_voiceConnector.Jsonize());

  }

  return payload.View().WriteReadable();
}




