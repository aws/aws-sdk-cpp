/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/UtteranceList.h>
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

UtteranceList::UtteranceList() : 
    m_botVersionHasBeenSet(false),
    m_utterancesHasBeenSet(false)
{
}

UtteranceList::UtteranceList(JsonView jsonValue) : 
    m_botVersionHasBeenSet(false),
    m_utterancesHasBeenSet(false)
{
  *this = jsonValue;
}

UtteranceList& UtteranceList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

    m_botVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("utterances"))
  {
    Aws::Utils::Array<JsonView> utterancesJsonList = jsonValue.GetArray("utterances");
    for(unsigned utterancesIndex = 0; utterancesIndex < utterancesJsonList.GetLength(); ++utterancesIndex)
    {
      m_utterances.push_back(utterancesJsonList[utterancesIndex].AsObject());
    }
    m_utterancesHasBeenSet = true;
  }

  return *this;
}

JsonValue UtteranceList::Jsonize() const
{
  JsonValue payload;

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  if(m_utterancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> utterancesJsonList(m_utterances.size());
   for(unsigned utterancesIndex = 0; utterancesIndex < utterancesJsonList.GetLength(); ++utterancesIndex)
   {
     utterancesJsonList[utterancesIndex].AsObject(m_utterances[utterancesIndex].Jsonize());
   }
   payload.WithArray("utterances", std::move(utterancesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
