/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/RoomSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivschat
{
namespace Model
{

RoomSummary::RoomSummary() : 
    m_arnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_loggingConfigurationIdentifiersHasBeenSet(false),
    m_messageReviewHandlerHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

RoomSummary::RoomSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_loggingConfigurationIdentifiersHasBeenSet(false),
    m_messageReviewHandlerHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RoomSummary& RoomSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loggingConfigurationIdentifiers"))
  {
    Aws::Utils::Array<JsonView> loggingConfigurationIdentifiersJsonList = jsonValue.GetArray("loggingConfigurationIdentifiers");
    for(unsigned loggingConfigurationIdentifiersIndex = 0; loggingConfigurationIdentifiersIndex < loggingConfigurationIdentifiersJsonList.GetLength(); ++loggingConfigurationIdentifiersIndex)
    {
      m_loggingConfigurationIdentifiers.push_back(loggingConfigurationIdentifiersJsonList[loggingConfigurationIdentifiersIndex].AsString());
    }
    m_loggingConfigurationIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("messageReviewHandler"))
  {
    m_messageReviewHandler = jsonValue.GetObject("messageReviewHandler");

    m_messageReviewHandlerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
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

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RoomSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithString("createTime", m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_loggingConfigurationIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> loggingConfigurationIdentifiersJsonList(m_loggingConfigurationIdentifiers.size());
   for(unsigned loggingConfigurationIdentifiersIndex = 0; loggingConfigurationIdentifiersIndex < loggingConfigurationIdentifiersJsonList.GetLength(); ++loggingConfigurationIdentifiersIndex)
   {
     loggingConfigurationIdentifiersJsonList[loggingConfigurationIdentifiersIndex].AsString(m_loggingConfigurationIdentifiers[loggingConfigurationIdentifiersIndex]);
   }
   payload.WithArray("loggingConfigurationIdentifiers", std::move(loggingConfigurationIdentifiersJsonList));

  }

  if(m_messageReviewHandlerHasBeenSet)
  {
   payload.WithObject("messageReviewHandler", m_messageReviewHandler.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("updateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace ivschat
} // namespace Aws
