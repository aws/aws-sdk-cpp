/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/Statement.h>
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

Statement::Statement() : 
    m_messagesHasBeenSet(false),
    m_responseCardHasBeenSet(false)
{
}

Statement::Statement(JsonView jsonValue) : 
    m_messagesHasBeenSet(false),
    m_responseCardHasBeenSet(false)
{
  *this = jsonValue;
}

Statement& Statement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messages"))
  {
    Aws::Utils::Array<JsonView> messagesJsonList = jsonValue.GetArray("messages");
    for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
    {
      m_messages.push_back(messagesJsonList[messagesIndex].AsObject());
    }
    m_messagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseCard"))
  {
    m_responseCard = jsonValue.GetString("responseCard");

    m_responseCardHasBeenSet = true;
  }

  return *this;
}

JsonValue Statement::Jsonize() const
{
  JsonValue payload;

  if(m_messagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
   for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
   {
     messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
   }
   payload.WithArray("messages", std::move(messagesJsonList));

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
