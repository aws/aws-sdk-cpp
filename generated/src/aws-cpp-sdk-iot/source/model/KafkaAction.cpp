/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/KafkaAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

KafkaAction::KafkaAction() : 
    m_destinationArnHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_clientPropertiesHasBeenSet(false),
    m_headersHasBeenSet(false)
{
}

KafkaAction::KafkaAction(JsonView jsonValue) : 
    m_destinationArnHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_clientPropertiesHasBeenSet(false),
    m_headersHasBeenSet(false)
{
  *this = jsonValue;
}

KafkaAction& KafkaAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationArn"))
  {
    m_destinationArn = jsonValue.GetString("destinationArn");

    m_destinationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topic"))
  {
    m_topic = jsonValue.GetString("topic");

    m_topicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("partition"))
  {
    m_partition = jsonValue.GetString("partition");

    m_partitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientProperties"))
  {
    Aws::Map<Aws::String, JsonView> clientPropertiesJsonMap = jsonValue.GetObject("clientProperties").GetAllObjects();
    for(auto& clientPropertiesItem : clientPropertiesJsonMap)
    {
      m_clientProperties[clientPropertiesItem.first] = clientPropertiesItem.second.AsString();
    }
    m_clientPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("headers"))
  {
    Aws::Utils::Array<JsonView> headersJsonList = jsonValue.GetArray("headers");
    for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
    {
      m_headers.push_back(headersJsonList[headersIndex].AsObject());
    }
    m_headersHasBeenSet = true;
  }

  return *this;
}

JsonValue KafkaAction::Jsonize() const
{
  JsonValue payload;

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("destinationArn", m_destinationArn);

  }

  if(m_topicHasBeenSet)
  {
   payload.WithString("topic", m_topic);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_partitionHasBeenSet)
  {
   payload.WithString("partition", m_partition);

  }

  if(m_clientPropertiesHasBeenSet)
  {
   JsonValue clientPropertiesJsonMap;
   for(auto& clientPropertiesItem : m_clientProperties)
   {
     clientPropertiesJsonMap.WithString(clientPropertiesItem.first, clientPropertiesItem.second);
   }
   payload.WithObject("clientProperties", std::move(clientPropertiesJsonMap));

  }

  if(m_headersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> headersJsonList(m_headers.size());
   for(unsigned headersIndex = 0; headersIndex < headersJsonList.GetLength(); ++headersIndex)
   {
     headersJsonList[headersIndex].AsObject(m_headers[headersIndex].Jsonize());
   }
   payload.WithArray("headers", std::move(headersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
