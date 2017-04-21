/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lex-models/model/BotChannelAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

BotChannelAssociation::BotChannelAssociation() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botAliasHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_type(ChannelType::NOT_SET),
    m_typeHasBeenSet(false),
    m_botConfigurationHasBeenSet(false)
{
}

BotChannelAssociation::BotChannelAssociation(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botAliasHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_type(ChannelType::NOT_SET),
    m_typeHasBeenSet(false),
    m_botConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

BotChannelAssociation& BotChannelAssociation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botAlias"))
  {
    m_botAlias = jsonValue.GetString("botAlias");

    m_botAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botName"))
  {
    m_botName = jsonValue.GetString("botName");

    m_botNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ChannelTypeMapper::GetChannelTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botConfiguration"))
  {
    Aws::Map<Aws::String, JsonValue> botConfigurationJsonMap = jsonValue.GetObject("botConfiguration").GetAllObjects();
    for(auto& botConfigurationItem : botConfigurationJsonMap)
    {
      m_botConfiguration[botConfigurationItem.first] = botConfigurationItem.second.AsString();
    }
    m_botConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue BotChannelAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_botAliasHasBeenSet)
  {
   payload.WithString("botAlias", m_botAlias);

  }

  if(m_botNameHasBeenSet)
  {
   payload.WithString("botName", m_botName);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("createdDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ChannelTypeMapper::GetNameForChannelType(m_type));
  }

  if(m_botConfigurationHasBeenSet)
  {
   JsonValue botConfigurationJsonMap;
   for(auto& botConfigurationItem : m_botConfiguration)
   {
     botConfigurationJsonMap.WithString(botConfigurationItem.first, botConfigurationItem.second);
   }
   payload.WithObject("botConfiguration", std::move(botConfigurationJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws