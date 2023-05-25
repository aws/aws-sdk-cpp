/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/LexBotConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

LexBotConfig::LexBotConfig() : 
    m_lexBotHasBeenSet(false),
    m_lexV2BotHasBeenSet(false)
{
}

LexBotConfig::LexBotConfig(JsonView jsonValue) : 
    m_lexBotHasBeenSet(false),
    m_lexV2BotHasBeenSet(false)
{
  *this = jsonValue;
}

LexBotConfig& LexBotConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LexBot"))
  {
    m_lexBot = jsonValue.GetObject("LexBot");

    m_lexBotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LexV2Bot"))
  {
    m_lexV2Bot = jsonValue.GetObject("LexV2Bot");

    m_lexV2BotHasBeenSet = true;
  }

  return *this;
}

JsonValue LexBotConfig::Jsonize() const
{
  JsonValue payload;

  if(m_lexBotHasBeenSet)
  {
   payload.WithObject("LexBot", m_lexBot.Jsonize());

  }

  if(m_lexV2BotHasBeenSet)
  {
   payload.WithObject("LexV2Bot", m_lexV2Bot.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
