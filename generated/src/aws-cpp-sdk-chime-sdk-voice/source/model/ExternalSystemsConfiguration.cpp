/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ExternalSystemsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

ExternalSystemsConfiguration::ExternalSystemsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ExternalSystemsConfiguration& ExternalSystemsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SessionBorderControllerTypes"))
  {
    Aws::Utils::Array<JsonView> sessionBorderControllerTypesJsonList = jsonValue.GetArray("SessionBorderControllerTypes");
    for(unsigned sessionBorderControllerTypesIndex = 0; sessionBorderControllerTypesIndex < sessionBorderControllerTypesJsonList.GetLength(); ++sessionBorderControllerTypesIndex)
    {
      m_sessionBorderControllerTypes.push_back(SessionBorderControllerTypeMapper::GetSessionBorderControllerTypeForName(sessionBorderControllerTypesJsonList[sessionBorderControllerTypesIndex].AsString()));
    }
    m_sessionBorderControllerTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContactCenterSystemTypes"))
  {
    Aws::Utils::Array<JsonView> contactCenterSystemTypesJsonList = jsonValue.GetArray("ContactCenterSystemTypes");
    for(unsigned contactCenterSystemTypesIndex = 0; contactCenterSystemTypesIndex < contactCenterSystemTypesJsonList.GetLength(); ++contactCenterSystemTypesIndex)
    {
      m_contactCenterSystemTypes.push_back(ContactCenterSystemTypeMapper::GetContactCenterSystemTypeForName(contactCenterSystemTypesJsonList[contactCenterSystemTypesIndex].AsString()));
    }
    m_contactCenterSystemTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue ExternalSystemsConfiguration::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
