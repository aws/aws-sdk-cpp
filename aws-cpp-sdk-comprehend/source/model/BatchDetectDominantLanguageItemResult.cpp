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

#include <aws/comprehend/model/BatchDetectDominantLanguageItemResult.h>
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

BatchDetectDominantLanguageItemResult::BatchDetectDominantLanguageItemResult() : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_languagesHasBeenSet(false)
{
}

BatchDetectDominantLanguageItemResult::BatchDetectDominantLanguageItemResult(const JsonValue& jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_languagesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetectDominantLanguageItemResult& BatchDetectDominantLanguageItemResult::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetInteger("Index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Languages"))
  {
    Array<JsonValue> languagesJsonList = jsonValue.GetArray("Languages");
    for(unsigned languagesIndex = 0; languagesIndex < languagesJsonList.GetLength(); ++languagesIndex)
    {
      m_languages.push_back(languagesJsonList[languagesIndex].AsObject());
    }
    m_languagesHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDetectDominantLanguageItemResult::Jsonize() const
{
  JsonValue payload;

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("Index", m_index);

  }

  if(m_languagesHasBeenSet)
  {
   Array<JsonValue> languagesJsonList(m_languages.size());
   for(unsigned languagesIndex = 0; languagesIndex < languagesJsonList.GetLength(); ++languagesIndex)
   {
     languagesJsonList[languagesIndex].AsObject(m_languages[languagesIndex].Jsonize());
   }
   payload.WithArray("Languages", std::move(languagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
