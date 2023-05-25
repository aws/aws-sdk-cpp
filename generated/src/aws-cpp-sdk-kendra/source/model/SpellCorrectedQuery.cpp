/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SpellCorrectedQuery.h>
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

SpellCorrectedQuery::SpellCorrectedQuery() : 
    m_suggestedQueryTextHasBeenSet(false),
    m_correctionsHasBeenSet(false)
{
}

SpellCorrectedQuery::SpellCorrectedQuery(JsonView jsonValue) : 
    m_suggestedQueryTextHasBeenSet(false),
    m_correctionsHasBeenSet(false)
{
  *this = jsonValue;
}

SpellCorrectedQuery& SpellCorrectedQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SuggestedQueryText"))
  {
    m_suggestedQueryText = jsonValue.GetString("SuggestedQueryText");

    m_suggestedQueryTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Corrections"))
  {
    Aws::Utils::Array<JsonView> correctionsJsonList = jsonValue.GetArray("Corrections");
    for(unsigned correctionsIndex = 0; correctionsIndex < correctionsJsonList.GetLength(); ++correctionsIndex)
    {
      m_corrections.push_back(correctionsJsonList[correctionsIndex].AsObject());
    }
    m_correctionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SpellCorrectedQuery::Jsonize() const
{
  JsonValue payload;

  if(m_suggestedQueryTextHasBeenSet)
  {
   payload.WithString("SuggestedQueryText", m_suggestedQueryText);

  }

  if(m_correctionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> correctionsJsonList(m_corrections.size());
   for(unsigned correctionsIndex = 0; correctionsIndex < correctionsJsonList.GetLength(); ++correctionsIndex)
   {
     correctionsJsonList[correctionsIndex].AsObject(m_corrections[correctionsIndex].Jsonize());
   }
   payload.WithArray("Corrections", std::move(correctionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
