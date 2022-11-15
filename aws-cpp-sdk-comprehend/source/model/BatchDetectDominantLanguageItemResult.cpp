/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BatchDetectDominantLanguageItemResult::BatchDetectDominantLanguageItemResult(JsonView jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_languagesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetectDominantLanguageItemResult& BatchDetectDominantLanguageItemResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetInteger("Index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Languages"))
  {
    Aws::Utils::Array<JsonView> languagesJsonList = jsonValue.GetArray("Languages");
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
   Aws::Utils::Array<JsonValue> languagesJsonList(m_languages.size());
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
