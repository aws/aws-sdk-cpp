/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ConverseTokensRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

ConverseTokensRequest::ConverseTokensRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

ConverseTokensRequest& ConverseTokensRequest::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("system"))
  {
    Aws::Utils::Array<JsonView> systemJsonList = jsonValue.GetArray("system");
    for(unsigned systemIndex = 0; systemIndex < systemJsonList.GetLength(); ++systemIndex)
    {
      m_system.push_back(systemJsonList[systemIndex].AsObject());
    }
    m_systemHasBeenSet = true;
  }
  return *this;
}

JsonValue ConverseTokensRequest::Jsonize() const
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

  if(m_systemHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> systemJsonList(m_system.size());
   for(unsigned systemIndex = 0; systemIndex < systemJsonList.GetLength(); ++systemIndex)
   {
     systemJsonList[systemIndex].AsObject(m_system[systemIndex].Jsonize());
   }
   payload.WithArray("system", std::move(systemJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
