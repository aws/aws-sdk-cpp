﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/DeleteVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteVoiceConnectorTerminationCredentialsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_usernamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usernamesJsonList(m_usernames.size());
   for(unsigned usernamesIndex = 0; usernamesIndex < usernamesJsonList.GetLength(); ++usernamesIndex)
   {
     usernamesJsonList[usernamesIndex].AsString(m_usernames[usernamesIndex]);
   }
   payload.WithArray("Usernames", std::move(usernamesJsonList));

  }

  return payload.View().WriteReadable();
}




