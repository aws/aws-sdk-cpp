/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BatchDetectKeyPhrasesItemResult::BatchDetectKeyPhrasesItemResult(JsonView jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_keyPhrasesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetectKeyPhrasesItemResult& BatchDetectKeyPhrasesItemResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetInteger("Index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyPhrases"))
  {
    Aws::Utils::Array<JsonView> keyPhrasesJsonList = jsonValue.GetArray("KeyPhrases");
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
   Aws::Utils::Array<JsonValue> keyPhrasesJsonList(m_keyPhrases.size());
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
