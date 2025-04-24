/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ChannelNamespace.h>
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

ChannelNamespace::ChannelNamespace(JsonView jsonValue)
{
  *this = jsonValue;
}

ChannelNamespace& ChannelNamespace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiId"))
  {
    m_apiId = jsonValue.GetString("apiId");
    m_apiIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subscribeAuthModes"))
  {
    Aws::Utils::Array<JsonView> subscribeAuthModesJsonList = jsonValue.GetArray("subscribeAuthModes");
    for(unsigned subscribeAuthModesIndex = 0; subscribeAuthModesIndex < subscribeAuthModesJsonList.GetLength(); ++subscribeAuthModesIndex)
    {
      m_subscribeAuthModes.push_back(subscribeAuthModesJsonList[subscribeAuthModesIndex].AsObject());
    }
    m_subscribeAuthModesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publishAuthModes"))
  {
    Aws::Utils::Array<JsonView> publishAuthModesJsonList = jsonValue.GetArray("publishAuthModes");
    for(unsigned publishAuthModesIndex = 0; publishAuthModesIndex < publishAuthModesJsonList.GetLength(); ++publishAuthModesIndex)
    {
      m_publishAuthModes.push_back(publishAuthModesJsonList[publishAuthModesIndex].AsObject());
    }
    m_publishAuthModesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codeHandlers"))
  {
    m_codeHandlers = jsonValue.GetString("codeHandlers");
    m_codeHandlersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelNamespaceArn"))
  {
    m_channelNamespaceArn = jsonValue.GetString("channelNamespaceArn");
    m_channelNamespaceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");
    m_createdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModified"))
  {
    m_lastModified = jsonValue.GetDouble("lastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("handlerConfigs"))
  {
    m_handlerConfigs = jsonValue.GetObject("handlerConfigs");
    m_handlerConfigsHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelNamespace::Jsonize() const
{
  JsonValue payload;

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("apiId", m_apiId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_subscribeAuthModesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscribeAuthModesJsonList(m_subscribeAuthModes.size());
   for(unsigned subscribeAuthModesIndex = 0; subscribeAuthModesIndex < subscribeAuthModesJsonList.GetLength(); ++subscribeAuthModesIndex)
   {
     subscribeAuthModesJsonList[subscribeAuthModesIndex].AsObject(m_subscribeAuthModes[subscribeAuthModesIndex].Jsonize());
   }
   payload.WithArray("subscribeAuthModes", std::move(subscribeAuthModesJsonList));

  }

  if(m_publishAuthModesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> publishAuthModesJsonList(m_publishAuthModes.size());
   for(unsigned publishAuthModesIndex = 0; publishAuthModesIndex < publishAuthModesJsonList.GetLength(); ++publishAuthModesIndex)
   {
     publishAuthModesJsonList[publishAuthModesIndex].AsObject(m_publishAuthModes[publishAuthModesIndex].Jsonize());
   }
   payload.WithArray("publishAuthModes", std::move(publishAuthModesJsonList));

  }

  if(m_codeHandlersHasBeenSet)
  {
   payload.WithString("codeHandlers", m_codeHandlers);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_channelNamespaceArnHasBeenSet)
  {
   payload.WithString("channelNamespaceArn", m_channelNamespaceArn);

  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("lastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if(m_handlerConfigsHasBeenSet)
  {
   payload.WithObject("handlerConfigs", m_handlerConfigs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
