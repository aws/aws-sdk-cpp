/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/RecognizedBotMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

RecognizedBotMember::RecognizedBotMember() : 
    m_botIdHasBeenSet(false),
    m_botNameHasBeenSet(false)
{
}

RecognizedBotMember::RecognizedBotMember(JsonView jsonValue) : 
    m_botIdHasBeenSet(false),
    m_botNameHasBeenSet(false)
{
  *this = jsonValue;
}

RecognizedBotMember& RecognizedBotMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

    m_botIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botName"))
  {
    m_botName = jsonValue.GetString("botName");

    m_botNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RecognizedBotMember::Jsonize() const
{
  JsonValue payload;

  if(m_botIdHasBeenSet)
  {
   payload.WithString("botId", m_botId);

  }

  if(m_botNameHasBeenSet)
  {
   payload.WithString("botName", m_botName);

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
