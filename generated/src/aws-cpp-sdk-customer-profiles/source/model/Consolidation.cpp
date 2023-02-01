/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/Consolidation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

Consolidation::Consolidation() : 
    m_matchingAttributesListHasBeenSet(false)
{
}

Consolidation::Consolidation(JsonView jsonValue) : 
    m_matchingAttributesListHasBeenSet(false)
{
  *this = jsonValue;
}

Consolidation& Consolidation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MatchingAttributesList"))
  {
    Aws::Utils::Array<JsonView> matchingAttributesListJsonList = jsonValue.GetArray("MatchingAttributesList");
    for(unsigned matchingAttributesListIndex = 0; matchingAttributesListIndex < matchingAttributesListJsonList.GetLength(); ++matchingAttributesListIndex)
    {
      Aws::Utils::Array<JsonView> matchingAttributesJsonList = matchingAttributesListJsonList[matchingAttributesListIndex].AsArray();
      Aws::Vector<Aws::String> matchingAttributesList;
      matchingAttributesList.reserve((size_t)matchingAttributesJsonList.GetLength());
      for(unsigned matchingAttributesIndex = 0; matchingAttributesIndex < matchingAttributesJsonList.GetLength(); ++matchingAttributesIndex)
      {
        matchingAttributesList.push_back(matchingAttributesJsonList[matchingAttributesIndex].AsString());
      }
      m_matchingAttributesList.push_back(std::move(matchingAttributesList));
    }
    m_matchingAttributesListHasBeenSet = true;
  }

  return *this;
}

JsonValue Consolidation::Jsonize() const
{
  JsonValue payload;

  if(m_matchingAttributesListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchingAttributesListJsonList(m_matchingAttributesList.size());
   for(unsigned matchingAttributesListIndex = 0; matchingAttributesListIndex < matchingAttributesListJsonList.GetLength(); ++matchingAttributesListIndex)
   {
     Aws::Utils::Array<JsonValue> matchingAttributesJsonList(m_matchingAttributesList[matchingAttributesListIndex].size());
     for(unsigned matchingAttributesIndex = 0; matchingAttributesIndex < matchingAttributesJsonList.GetLength(); ++matchingAttributesIndex)
     {
       matchingAttributesJsonList[matchingAttributesIndex].AsString(m_matchingAttributesList[matchingAttributesListIndex][matchingAttributesIndex]);
     }
     matchingAttributesListJsonList[matchingAttributesListIndex].AsArray(std::move(matchingAttributesJsonList));
   }
   payload.WithArray("MatchingAttributesList", std::move(matchingAttributesListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
