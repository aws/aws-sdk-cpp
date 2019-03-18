/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> credentialsJsonList(m_credentials.size());
   for(unsigned credentialsIndex = 0; credentialsIndex < credentialsJsonList.GetLength(); ++credentialsIndex)
   {
     credentialsJsonList[credentialsIndex].AsObject(m_credentials[credentialsIndex].Jsonize());
   }
   payload.WithArray("Credentials", std::move(credentialsJsonList));

  }

  return payload.View().WriteReadable();
}




