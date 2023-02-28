/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/FlywheelModelEvaluationMetrics.h>
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

FlywheelModelEvaluationMetrics::FlywheelModelEvaluationMetrics() : 
    m_averageF1Score(0.0),
    m_averageF1ScoreHasBeenSet(false),
    m_averagePrecision(0.0),
    m_averagePrecisionHasBeenSet(false),
    m_averageRecall(0.0),
    m_averageRecallHasBeenSet(false),
    m_averageAccuracy(0.0),
    m_averageAccuracyHasBeenSet(false)
{
}

FlywheelModelEvaluationMetrics::FlywheelModelEvaluationMetrics(JsonView jsonValue) : 
    m_averageF1Score(0.0),
    m_averageF1ScoreHasBeenSet(false),
    m_averagePrecision(0.0),
    m_averagePrecisionHasBeenSet(false),
    m_averageRecall(0.0),
    m_averageRecallHasBeenSet(false),
    m_averageAccuracy(0.0),
    m_averageAccuracyHasBeenSet(false)
{
  *this = jsonValue;
}

FlywheelModelEvaluationMetrics& FlywheelModelEvaluationMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AverageF1Score"))
  {
    m_averageF1Score = jsonValue.GetDouble("AverageF1Score");

    m_averageF1ScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AveragePrecision"))
  {
    m_averagePrecision = jsonValue.GetDouble("AveragePrecision");

    m_averagePrecisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AverageRecall"))
  {
    m_averageRecall = jsonValue.GetDouble("AverageRecall");

    m_averageRecallHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AverageAccuracy"))
  {
    m_averageAccuracy = jsonValue.GetDouble("AverageAccuracy");

    m_averageAccuracyHasBeenSet = true;
  }

  return *this;
}

JsonValue FlywheelModelEvaluationMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_averageF1ScoreHasBeenSet)
  {
   payload.WithDouble("AverageF1Score", m_averageF1Score);

  }

  if(m_averagePrecisionHasBeenSet)
  {
   payload.WithDouble("AveragePrecision", m_averagePrecision);

  }

  if(m_averageRecallHasBeenSet)
  {
   payload.WithDouble("AverageRecall", m_averageRecall);

  }

  if(m_averageAccuracyHasBeenSet)
  {
   payload.WithDouble("AverageAccuracy", m_averageAccuracy);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
