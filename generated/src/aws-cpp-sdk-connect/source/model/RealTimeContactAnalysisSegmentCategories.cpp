/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisSegmentCategories.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

RealTimeContactAnalysisSegmentCategories::RealTimeContactAnalysisSegmentCategories() : 
    m_matchedDetailsHasBeenSet(false)
{
}

RealTimeContactAnalysisSegmentCategories::RealTimeContactAnalysisSegmentCategories(JsonView jsonValue) : 
    m_matchedDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

RealTimeContactAnalysisSegmentCategories& RealTimeContactAnalysisSegmentCategories::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MatchedDetails"))
  {
    Aws::Map<Aws::String, JsonView> matchedDetailsJsonMap = jsonValue.GetObject("MatchedDetails").GetAllObjects();
    for(auto& matchedDetailsItem : matchedDetailsJsonMap)
    {
      m_matchedDetails[matchedDetailsItem.first] = matchedDetailsItem.second.AsObject();
    }
    m_matchedDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue RealTimeContactAnalysisSegmentCategories::Jsonize() const
{
  JsonValue payload;

  if(m_matchedDetailsHasBeenSet)
  {
   JsonValue matchedDetailsJsonMap;
   for(auto& matchedDetailsItem : m_matchedDetails)
   {
     matchedDetailsJsonMap.WithObject(matchedDetailsItem.first, matchedDetailsItem.second.Jsonize());
   }
   payload.WithObject("MatchedDetails", std::move(matchedDetailsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
