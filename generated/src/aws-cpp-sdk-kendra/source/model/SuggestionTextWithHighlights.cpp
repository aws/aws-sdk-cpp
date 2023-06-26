/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SuggestionTextWithHighlights.h>
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

SuggestionTextWithHighlights::SuggestionTextWithHighlights() : 
    m_textHasBeenSet(false),
    m_highlightsHasBeenSet(false)
{
}

SuggestionTextWithHighlights::SuggestionTextWithHighlights(JsonView jsonValue) : 
    m_textHasBeenSet(false),
    m_highlightsHasBeenSet(false)
{
  *this = jsonValue;
}

SuggestionTextWithHighlights& SuggestionTextWithHighlights::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Highlights"))
  {
    Aws::Utils::Array<JsonView> highlightsJsonList = jsonValue.GetArray("Highlights");
    for(unsigned highlightsIndex = 0; highlightsIndex < highlightsJsonList.GetLength(); ++highlightsIndex)
    {
      m_highlights.push_back(highlightsJsonList[highlightsIndex].AsObject());
    }
    m_highlightsHasBeenSet = true;
  }

  return *this;
}

JsonValue SuggestionTextWithHighlights::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_highlightsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> highlightsJsonList(m_highlights.size());
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
