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

#include <aws/kendra/model/TextWithHighlights.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

TextWithHighlights::TextWithHighlights() : 
    m_textHasBeenSet(false),
    m_highlightsHasBeenSet(false)
{
}

TextWithHighlights::TextWithHighlights(JsonView jsonValue) : 
    m_textHasBeenSet(false),
    m_highlightsHasBeenSet(false)
{
  *this = jsonValue;
}

TextWithHighlights& TextWithHighlights::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Highlights"))
  {
    Array<JsonView> highlightsJsonList = jsonValue.GetArray("Highlights");
    for(unsigned highlightsIndex = 0; highlightsIndex < highlightsJsonList.GetLength(); ++highlightsIndex)
    {
      m_highlights.push_back(highlightsJsonList[highlightsIndex].AsObject());
    }
    m_highlightsHasBeenSet = true;
  }

  return *this;
}

JsonValue TextWithHighlights::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_highlightsHasBeenSet)
  {
   Array<JsonValue> highlightsJsonList(m_highlights.size());
   for(unsigned highlightsIndex = 0; highlightsIndex < highlightsJsonList.GetLength(); ++highlightsIndex)
   {
     highlightsJsonList[highlightsIndex].AsObject(m_highlights[highlightsIndex].Jsonize());
   }
   payload.WithArray("Highlights", std::move(highlightsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
