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

#include <aws/comprehend/model/BatchDetectKeyPhrasesItemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

BatchDetectKeyPhrasesItemResult::BatchDetectKeyPhrasesItemResult() : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_keyPhrasesHasBeenSet(false)
{
}

BatchDetectKeyPhrasesItemResult::BatchDetectKeyPhrasesItemResult(const JsonValue& jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_keyPhrasesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetectKeyPhrasesItemResult& BatchDetectKeyPhrasesItemResult::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetInteger("Index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyPhrases"))
  {
    Array<JsonValue> keyPhrasesJsonList = jsonValue.GetArray("KeyPhrases");
    for(unsigned keyPhrasesIndex = 0; keyPhrasesIndex < keyPhrasesJsonList.GetLength(); ++keyPhrasesIndex)
    {
      m_keyPhrases.push_back(keyPhrasesJsonList[keyPhrasesIndex].AsObject());
    }
    m_keyPhrasesHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDetectKeyPhrasesItemResult::Jsonize() const
{
  JsonValue payload;

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("Index", m_index);

  }

  if(m_keyPhrasesHasBeenSet)
  {
   Array<JsonValue> keyPhrasesJsonList(m_keyPhrases.size());
   for(unsigned keyPhrasesIndex = 0; keyPhrasesIndex < keyPhrasesJsonList.GetLength(); ++keyPhrasesIndex)
   {
     keyPhrasesJsonList[keyPhrasesIndex].AsObject(m_keyPhrases[keyPhrasesIndex].Jsonize());
   }
   payload.WithArray("KeyPhrases", std::move(keyPhrasesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
