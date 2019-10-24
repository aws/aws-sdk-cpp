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

#include <aws/chime/model/UpdateVoiceConnectorGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVoiceConnectorGroupRequest::UpdateVoiceConnectorGroupRequest() : 
    m_voiceConnectorGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_voiceConnectorItemsHasBeenSet(false)
{
}

Aws::String UpdateVoiceConnectorGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_voiceConnectorItemsHasBeenSet)
  {
   Array<JsonValue> voiceConnectorItemsJsonList(m_voiceConnectorItems.size());
   for(unsigned voiceConnectorItemsIndex = 0; voiceConnectorItemsIndex < voiceConnectorItemsJsonList.GetLength(); ++voiceConnectorItemsIndex)
   {
     voiceConnectorItemsJsonList[voiceConnectorItemsIndex].AsObject(m_voiceConnectorItems[voiceConnectorItemsIndex].Jsonize());
   }
   payload.WithArray("VoiceConnectorItems", std::move(voiceConnectorItemsJsonList));

  }

  return payload.View().WriteReadable();
}




