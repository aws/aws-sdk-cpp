/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/EventConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

EventConfig::EventConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EventConfig& EventConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authProviders"))
  {
    Aws::Utils::Array<JsonView> authProvidersJsonList = jsonValue.GetArray("authProviders");
    for(unsigned authProvidersIndex = 0; authProvidersIndex < authProvidersJsonList.GetLength(); ++authProvidersIndex)
    {
      m_authProviders.push_back(authProvidersJsonList[authProvidersIndex].AsObject());
    }
    m_authProvidersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionAuthModes"))
  {
    Aws::Utils::Array<JsonView> connectionAuthModesJsonList = jsonValue.GetArray("connectionAuthModes");
    for(unsigned connectionAuthModesIndex = 0; connectionAuthModesIndex < connectionAuthModesJsonList.GetLength(); ++connectionAuthModesIndex)
    {
      m_connectionAuthModes.push_back(connectionAuthModesJsonList[connectionAuthModesIndex].AsObject());
    }
    m_connectionAuthModesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultPublishAuthModes"))
  {
    Aws::Utils::Array<JsonView> defaultPublishAuthModesJsonList = jsonValue.GetArray("defaultPublishAuthModes");
    for(unsigned defaultPublishAuthModesIndex = 0; defaultPublishAuthModesIndex < defaultPublishAuthModesJsonList.GetLength(); ++defaultPublishAuthModesIndex)
    {
      m_defaultPublishAuthModes.push_back(defaultPublishAuthModesJsonList[defaultPublishAuthModesIndex].AsObject());
    }
    m_defaultPublishAuthModesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultSubscribeAuthModes"))
  {
    Aws::Utils::Array<JsonView> defaultSubscribeAuthModesJsonList = jsonValue.GetArray("defaultSubscribeAuthModes");
    for(unsigned defaultSubscribeAuthModesIndex = 0; defaultSubscribeAuthModesIndex < defaultSubscribeAuthModesJsonList.GetLength(); ++defaultSubscribeAuthModesIndex)
    {
      m_defaultSubscribeAuthModes.push_back(defaultSubscribeAuthModesJsonList[defaultSubscribeAuthModesIndex].AsObject());
    }
    m_defaultSubscribeAuthModesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logConfig"))
  {
    m_logConfig = jsonValue.GetObject("logConfig");
    m_logConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue EventConfig::Jsonize() const
{
  JsonValue payload;

  if(m_authProvidersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authProvidersJsonList(m_authProviders.size());
   for(unsigned authProvidersIndex = 0; authProvidersIndex < authProvidersJsonList.GetLength(); ++authProvidersIndex)
   {
     authProvidersJsonList[authProvidersIndex].AsObject(m_authProviders[authProvidersIndex].Jsonize());
   }
   payload.WithArray("authProviders", std::move(authProvidersJsonList));

  }

  if(m_connectionAuthModesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectionAuthModesJsonList(m_connectionAuthModes.size());
   for(unsigned connectionAuthModesIndex = 0; connectionAuthModesIndex < connectionAuthModesJsonList.GetLength(); ++connectionAuthModesIndex)
   {
     connectionAuthModesJsonList[connectionAuthModesIndex].AsObject(m_connectionAuthModes[connectionAuthModesIndex].Jsonize());
   }
   payload.WithArray("connectionAuthModes", std::move(connectionAuthModesJsonList));

  }

  if(m_defaultPublishAuthModesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultPublishAuthModesJsonList(m_defaultPublishAuthModes.size());
   for(unsigned defaultPublishAuthModesIndex = 0; defaultPublishAuthModesIndex < defaultPublishAuthModesJsonList.GetLength(); ++defaultPublishAuthModesIndex)
   {
     defaultPublishAuthModesJsonList[defaultPublishAuthModesIndex].AsObject(m_defaultPublishAuthModes[defaultPublishAuthModesIndex].Jsonize());
   }
   payload.WithArray("defaultPublishAuthModes", std::move(defaultPublishAuthModesJsonList));

  }

  if(m_defaultSubscribeAuthModesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultSubscribeAuthModesJsonList(m_defaultSubscribeAuthModes.size());
   for(unsigned defaultSubscribeAuthModesIndex = 0; defaultSubscribeAuthModesIndex < defaultSubscribeAuthModesJsonList.GetLength(); ++defaultSubscribeAuthModesIndex)
   {
     defaultSubscribeAuthModesJsonList[defaultSubscribeAuthModesIndex].AsObject(m_defaultSubscribeAuthModes[defaultSubscribeAuthModesIndex].Jsonize());
   }
   payload.WithArray("defaultSubscribeAuthModes", std::move(defaultSubscribeAuthModesJsonList));

  }

  if(m_logConfigHasBeenSet)
  {
   payload.WithObject("logConfig", m_logConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
