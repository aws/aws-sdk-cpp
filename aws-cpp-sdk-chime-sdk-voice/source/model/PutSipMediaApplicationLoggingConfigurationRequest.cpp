/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PutSipMediaApplicationLoggingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutSipMediaApplicationLoggingConfigurationRequest::PutSipMediaApplicationLoggingConfigurationRequest() : 
    m_sipMediaApplicationIdHasBeenSet(false),
    m_sipMediaApplicationLoggingConfigurationHasBeenSet(false)
{
}

Aws::String PutSipMediaApplicationLoggingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sipMediaApplicationLoggingConfigurationHasBeenSet)
  {
   payload.WithObject("SipMediaApplicationLoggingConfiguration", m_sipMediaApplicationLoggingConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




