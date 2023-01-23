﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/UpdateGlobalSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGlobalSettingsRequest::UpdateGlobalSettingsRequest() : 
    m_businessCallingHasBeenSet(false),
    m_voiceConnectorHasBeenSet(false)
{
}

Aws::String UpdateGlobalSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_businessCallingHasBeenSet)
  {
   payload.WithObject("BusinessCalling", m_businessCalling.Jsonize());

  }

  if(m_voiceConnectorHasBeenSet)
  {
   payload.WithObject("VoiceConnector", m_voiceConnector.Jsonize());

  }

  return payload.View().WriteReadable();
}




