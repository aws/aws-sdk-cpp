/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/PutVoiceConnectorExternalSystemsConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutVoiceConnectorExternalSystemsConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionBorderControllerTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sessionBorderControllerTypesJsonList(m_sessionBorderControllerTypes.size());
   for(unsigned sessionBorderControllerTypesIndex = 0; sessionBorderControllerTypesIndex < sessionBorderControllerTypesJsonList.GetLength(); ++sessionBorderControllerTypesIndex)
   {
     sessionBorderControllerTypesJsonList[sessionBorderControllerTypesIndex].AsString(SessionBorderControllerTypeMapper::GetNameForSessionBorderControllerType(m_sessionBorderControllerTypes[sessionBorderControllerTypesIndex]));
   }
   payload.WithArray("SessionBorderControllerTypes", std::move(sessionBorderControllerTypesJsonList));

  }

  if(m_contactCenterSystemTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contactCenterSystemTypesJsonList(m_contactCenterSystemTypes.size());
   for(unsigned contactCenterSystemTypesIndex = 0; contactCenterSystemTypesIndex < contactCenterSystemTypesJsonList.GetLength(); ++contactCenterSystemTypesIndex)
   {
     contactCenterSystemTypesJsonList[contactCenterSystemTypesIndex].AsString(ContactCenterSystemTypeMapper::GetNameForContactCenterSystemType(m_contactCenterSystemTypes[contactCenterSystemTypesIndex]));
   }
   payload.WithArray("ContactCenterSystemTypes", std::move(contactCenterSystemTypesJsonList));

  }

  return payload.View().WriteReadable();
}




