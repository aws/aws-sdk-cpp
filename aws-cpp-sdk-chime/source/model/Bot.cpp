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

#include <aws/chime/model/Bot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

Bot::Bot() : 
    m_botIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_botType(BotType::NOT_SET),
    m_botTypeHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_botEmailHasBeenSet(false),
    m_securityTokenHasBeenSet(false)
{
}

Bot::Bot(JsonView jsonValue) : 
    m_botIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_botType(BotType::NOT_SET),
    m_botTypeHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_botEmailHasBeenSet(false),
    m_securityTokenHasBeenSet(false)
{
  *this = jsonValue;
}

Bot& Bot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BotId"))
  {
    m_botId = jsonValue.GetString("BotId");

    m_botIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BotType"))
  {
    m_botType = BotTypeMapper::GetBotTypeForName(jsonValue.GetString("BotType"));

    m_botTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Disabled"))
  {
    m_disabled = jsonValue.GetBool("Disabled");

    m_disabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BotEmail"))
  {
    m_botEmail = jsonValue.GetString("BotEmail");

    m_botEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityToken"))
  {
    m_securityToken = jsonValue.GetString("SecurityToken");

    m_securityTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue Bot::Jsonize() const
{
  JsonValue payload;

  if(m_botIdHasBeenSet)
  {
   payload.WithString("BotId", m_botId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_botTypeHasBeenSet)
  {
   payload.WithString("BotType", BotTypeMapper::GetNameForBotType(m_botType));
  }

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_botEmailHasBeenSet)
  {
   payload.WithString("BotEmail", m_botEmail);

  }

  if(m_securityTokenHasBeenSet)
  {
   payload.WithString("SecurityToken", m_securityToken);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
