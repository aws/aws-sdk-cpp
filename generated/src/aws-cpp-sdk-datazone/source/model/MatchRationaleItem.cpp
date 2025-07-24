/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/MatchRationaleItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

MatchRationaleItem::MatchRationaleItem(JsonView jsonValue)
{
  *this = jsonValue;
}

MatchRationaleItem& MatchRationaleItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textMatches"))
  {
    Aws::Utils::Array<JsonView> textMatchesJsonList = jsonValue.GetArray("textMatches");
    for(unsigned textMatchesIndex = 0; textMatchesIndex < textMatchesJsonList.GetLength(); ++textMatchesIndex)
    {
      m_textMatches.push_back(textMatchesJsonList[textMatchesIndex].AsObject());
    }
    m_textMatchesHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchRationaleItem::Jsonize() const
{
  JsonValue payload;

  if(m_textMatchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> textMatchesJsonList(m_textMatches.size());
   for(unsigned textMatchesIndex = 0; textMatchesIndex < textMatchesJsonList.GetLength(); ++textMatchesIndex)
   {
     textMatchesJsonList[textMatchesIndex].AsObject(m_textMatches[textMatchesIndex].Jsonize());
   }
   payload.WithArray("textMatches", std::move(textMatchesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
