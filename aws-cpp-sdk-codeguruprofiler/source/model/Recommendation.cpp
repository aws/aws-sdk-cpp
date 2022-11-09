/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/Recommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

Recommendation::Recommendation() : 
    m_allMatchesCount(0),
    m_allMatchesCountHasBeenSet(false),
    m_allMatchesSum(0.0),
    m_allMatchesSumHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_topMatchesHasBeenSet(false)
{
}

Recommendation::Recommendation(JsonView jsonValue) : 
    m_allMatchesCount(0),
    m_allMatchesCountHasBeenSet(false),
    m_allMatchesSum(0.0),
    m_allMatchesSumHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_topMatchesHasBeenSet(false)
{
  *this = jsonValue;
}

Recommendation& Recommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allMatchesCount"))
  {
    m_allMatchesCount = jsonValue.GetInteger("allMatchesCount");

    m_allMatchesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allMatchesSum"))
  {
    m_allMatchesSum = jsonValue.GetDouble("allMatchesSum");

    m_allMatchesSumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pattern"))
  {
    m_pattern = jsonValue.GetObject("pattern");

    m_patternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topMatches"))
  {
    Aws::Utils::Array<JsonView> topMatchesJsonList = jsonValue.GetArray("topMatches");
    for(unsigned topMatchesIndex = 0; topMatchesIndex < topMatchesJsonList.GetLength(); ++topMatchesIndex)
    {
      m_topMatches.push_back(topMatchesJsonList[topMatchesIndex].AsObject());
    }
    m_topMatchesHasBeenSet = true;
  }

  return *this;
}

JsonValue Recommendation::Jsonize() const
{
  JsonValue payload;

  if(m_allMatchesCountHasBeenSet)
  {
   payload.WithInteger("allMatchesCount", m_allMatchesCount);

  }

  if(m_allMatchesSumHasBeenSet)
  {
   payload.WithDouble("allMatchesSum", m_allMatchesSum);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_patternHasBeenSet)
  {
   payload.WithObject("pattern", m_pattern.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_topMatchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topMatchesJsonList(m_topMatches.size());
   for(unsigned topMatchesIndex = 0; topMatchesIndex < topMatchesJsonList.GetLength(); ++topMatchesIndex)
   {
     topMatchesJsonList[topMatchesIndex].AsObject(m_topMatches[topMatchesIndex].Jsonize());
   }
   payload.WithArray("topMatches", std::move(topMatchesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
