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

UtteranceList::UtteranceList(const JsonValue& jsonValue) : 
    m_botVersionHasBeenSet(false),
    m_utterancesHasBeenSet(false)
{
  *this = jsonValue;
}

UtteranceList& UtteranceList::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

    m_botVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("utterances"))
  {
    Array<JsonValue> utterancesJsonList = jsonValue.GetArray("utterances");
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
   Array<JsonValue> utterancesJsonList(m_utterances.size());
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