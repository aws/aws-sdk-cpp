/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PutSipMediaApplicationAlexaSkillConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutSipMediaApplicationAlexaSkillConfigurationRequest::PutSipMediaApplicationAlexaSkillConfigurationRequest() : 
    m_sipMediaApplicationIdHasBeenSet(false),
    m_sipMediaApplicationAlexaSkillConfigurationHasBeenSet(false)
{
}

Aws::String PutSipMediaApplicationAlexaSkillConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sipMediaApplicationAlexaSkillConfigurationHasBeenSet)
  {
   payload.WithObject("SipMediaApplicationAlexaSkillConfiguration", m_sipMediaApplicationAlexaSkillConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




