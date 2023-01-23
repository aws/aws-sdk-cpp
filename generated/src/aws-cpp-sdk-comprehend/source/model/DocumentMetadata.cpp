/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentMetadata.h>
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

DocumentMetadata::DocumentMetadata() : 
    m_pages(0),
    m_pagesHasBeenSet(false),
    m_extractedCharactersHasBeenSet(false)
{
}

DocumentMetadata::DocumentMetadata(JsonView jsonValue) : 
    m_pages(0),
    m_pagesHasBeenSet(false),
    m_extractedCharactersHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentMetadata& DocumentMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Pages"))
  {
    m_pages = jsonValue.GetInteger("Pages");

    m_pagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtractedCharacters"))
  {
    Aws::Utils::Array<JsonView> extractedCharactersJsonList = jsonValue.GetArray("ExtractedCharacters");
    for(unsigned extractedCharactersIndex = 0; extractedCharactersIndex < extractedCharactersJsonList.GetLength(); ++extractedCharactersIndex)
    {
      m_extractedCharacters.push_back(extractedCharactersJsonList[extractedCharactersIndex].AsObject());
    }
    m_extractedCharactersHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_pagesHasBeenSet)
  {
   payload.WithInteger("Pages", m_pages);

  }

  if(m_extractedCharactersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> extractedCharactersJsonList(m_extractedCharacters.size());
   for(unsigned extractedCharactersIndex = 0; extractedCharactersIndex < extractedCharactersJsonList.GetLength(); ++extractedCharactersIndex)
   {
     extractedCharactersJsonList[extractedCharactersIndex].AsObject(m_extractedCharacters[extractedCharactersIndex].Jsonize());
   }
   payload.WithArray("ExtractedCharacters", std::move(extractedCharactersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
