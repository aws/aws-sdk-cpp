﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/Prompt.h>
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

Prompt::Prompt() : 
    m_messagesHasBeenSet(false),
    m_maxAttempts(0),
    m_maxAttemptsHasBeenSet(false),
    m_responseCardHasBeenSet(false)
{
}

Prompt::Prompt(JsonView jsonValue) : 
    m_messagesHasBeenSet(false),
    m_maxAttempts(0),
    m_maxAttemptsHasBeenSet(false),
    m_responseCardHasBeenSet(false)
{
  *this = jsonValue;
}

Prompt& Prompt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messages"))
  {
    Array<JsonView> messagesJsonList = jsonValue.GetArray("messages");
    for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
    {
      m_messages.push_back(messagesJsonList[messagesIndex].AsObject());
    }
    m_messagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxAttempts"))
  {
    m_maxAttempts = jsonValue.GetInteger("maxAttempts");

    m_maxAttemptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseCard"))
  {
    m_responseCard = jsonValue.GetString("responseCard");

    m_responseCardHasBeenSet = true;
  }

  return *this;
}

JsonValue Prompt::Jsonize() const
{
  JsonValue payload;

  if(m_messagesHasBeenSet)
  {
   Array<JsonValue> messagesJsonList(m_messages.size());
   for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
   {
     messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
   }
   payload.WithArray("messages", std::move(messagesJsonList));

  }

  if(m_maxAttemptsHasBeenSet)
  {
   payload.WithInteger("maxAttempts", m_maxAttempts);

  }

  if(m_responseCardHasBeenSet)
  {
   payload.WithString("responseCard", m_responseCard);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
