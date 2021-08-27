/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_botConfigurationHasBeenSet(false),
    m_status(ChannelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

BotChannelAssociation::BotChannelAssociation(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botAliasHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_type(ChannelType::NOT_SET),
    m_typeHasBeenSet(false),
    m_botConfigurationHasBeenSet(false),
    m_status(ChannelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

BotChannelAssociation& BotChannelAssociation::operator =(JsonView jsonValue)
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
    Aws::Map<Aws::String, JsonView> botConfigurationJsonMap = jsonValue.GetObject("botConfiguration").GetAllObjects();
    for(auto& botConfigurationItem : botConfigurationJsonMap)
    {
      m_botConfiguration[botConfigurationItem.first] = botConfigurationItem.second.AsString();
    }
    m_botConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ChannelStatusMapper::GetChannelStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ChannelStatusMapper::GetNameForChannelStatus(m_status));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
