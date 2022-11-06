/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/PutVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutVoiceConnectorTerminationCredentialsRequest::PutVoiceConnectorTerminationCredentialsRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_credentialsHasBeenSet(false)
{
}

Aws::String PutVoiceConnectorTerminationCredentialsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_credentialsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> credentialsJsonList(m_credentials.size());
   for(unsigned credentialsIndex = 0; credentialsIndex < credentialsJsonList.GetLength(); ++credentialsIndex)
   {
     credentialsJsonList[credentialsIndex].AsObject(m_credentials[credentialsIndex].Jsonize());
   }
   payload.WithArray("Credentials", std::move(credentialsJsonList));

  }

  return payload.View().WriteReadable();
}




