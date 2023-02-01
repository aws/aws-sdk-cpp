/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/AnomalyScore.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

AnomalyScore::AnomalyScore() : 
    m_maxScore(0.0),
    m_maxScoreHasBeenSet(false),
    m_currentScore(0.0),
    m_currentScoreHasBeenSet(false)
{
}

AnomalyScore::AnomalyScore(JsonView jsonValue) : 
    m_maxScore(0.0),
    m_maxScoreHasBeenSet(false),
    m_currentScore(0.0),
    m_currentScoreHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyScore& AnomalyScore::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxScore"))
  {
    m_maxScore = jsonValue.GetDouble("MaxScore");

    m_maxScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentScore"))
  {
    m_currentScore = jsonValue.GetDouble("CurrentScore");

    m_currentScoreHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalyScore::Jsonize() const
{
  JsonValue payload;

  if(m_maxScoreHasBeenSet)
  {
   payload.WithDouble("MaxScore", m_maxScore);

  }

  if(m_currentScoreHasBeenSet)
  {
   payload.WithDouble("CurrentScore", m_currentScore);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
