/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UserTurnOutputSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

UserTurnOutputSpecification::UserTurnOutputSpecification() : 
    m_intentHasBeenSet(false),
    m_activeContextsHasBeenSet(false),
    m_transcriptHasBeenSet(false)
{
}

UserTurnOutputSpecification::UserTurnOutputSpecification(JsonView jsonValue) : 
    m_intentHasBeenSet(false),
    m_activeContextsHasBeenSet(false),
    m_transcriptHasBeenSet(false)
{
  *this = jsonValue;
}

UserTurnOutputSpecification& UserTurnOutputSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intent"))
  {
    m_intent = jsonValue.GetObject("intent");

    m_intentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeContexts"))
  {
    Aws::Utils::Array<JsonView> activeContextsJsonList = jsonValue.GetArray("activeContexts");
    for(unsigned activeContextsIndex = 0; activeContextsIndex < activeContextsJsonList.GetLength(); ++activeContextsIndex)
    {
      m_activeContexts.push_back(activeContextsJsonList[activeContextsIndex].AsObject());
    }
    m_activeContextsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transcript"))
  {
    m_transcript = jsonValue.GetString("transcript");

    m_transcriptHasBeenSet = true;
  }

  return *this;
}

JsonValue UserTurnOutputSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_intentHasBeenSet)
  {
   payload.WithObject("intent", m_intent.Jsonize());

  }

  if(m_activeContextsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> activeContextsJsonList(m_activeContexts.size());
   for(unsigned activeContextsIndex = 0; activeContextsIndex < activeContextsJsonList.GetLength(); ++activeContextsIndex)
   {
     activeContextsJsonList[activeContextsIndex].AsObject(m_activeContexts[activeContextsIndex].Jsonize());
   }
   payload.WithArray("activeContexts", std::move(activeContextsJsonList));

  }

  if(m_transcriptHasBeenSet)
  {
   payload.WithString("transcript", m_transcript);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
