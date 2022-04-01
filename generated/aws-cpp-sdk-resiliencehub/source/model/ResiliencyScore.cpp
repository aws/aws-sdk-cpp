/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResiliencyScore.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

ResiliencyScore::ResiliencyScore() : 
    m_disruptionScoreHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
}

ResiliencyScore::ResiliencyScore(JsonView jsonValue) : 
    m_disruptionScoreHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

ResiliencyScore& ResiliencyScore::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("disruptionScore"))
  {
    Aws::Map<Aws::String, JsonView> disruptionScoreJsonMap = jsonValue.GetObject("disruptionScore").GetAllObjects();
    for(auto& disruptionScoreItem : disruptionScoreJsonMap)
    {
      m_disruptionScore[DisruptionTypeMapper::GetDisruptionTypeForName(disruptionScoreItem.first)] = disruptionScoreItem.second.AsDouble();
    }
    m_disruptionScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetDouble("score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue ResiliencyScore::Jsonize() const
{
  JsonValue payload;

  if(m_disruptionScoreHasBeenSet)
  {
   JsonValue disruptionScoreJsonMap;
   for(auto& disruptionScoreItem : m_disruptionScore)
   {
     disruptionScoreJsonMap.WithDouble(DisruptionTypeMapper::GetNameForDisruptionType(disruptionScoreItem.first), disruptionScoreItem.second);
   }
   payload.WithObject("disruptionScore", std::move(disruptionScoreJsonMap));

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
