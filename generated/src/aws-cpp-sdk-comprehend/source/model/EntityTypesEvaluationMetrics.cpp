/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityTypesEvaluationMetrics.h>
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

EntityTypesEvaluationMetrics::EntityTypesEvaluationMetrics() : 
    m_precision(0.0),
    m_precisionHasBeenSet(false),
    m_recall(0.0),
    m_recallHasBeenSet(false),
    m_f1Score(0.0),
    m_f1ScoreHasBeenSet(false)
{
}

EntityTypesEvaluationMetrics::EntityTypesEvaluationMetrics(JsonView jsonValue) : 
    m_precision(0.0),
    m_precisionHasBeenSet(false),
    m_recall(0.0),
    m_recallHasBeenSet(false),
    m_f1Score(0.0),
    m_f1ScoreHasBeenSet(false)
{
  *this = jsonValue;
}

EntityTypesEvaluationMetrics& EntityTypesEvaluationMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Precision"))
  {
    m_precision = jsonValue.GetDouble("Precision");

    m_precisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Recall"))
  {
    m_recall = jsonValue.GetDouble("Recall");

    m_recallHasBeenSet = true;
  }

  if(jsonValue.ValueExists("F1Score"))
  {
    m_f1Score = jsonValue.GetDouble("F1Score");

    m_f1ScoreHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityTypesEvaluationMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_precisionHasBeenSet)
  {
   payload.WithDouble("Precision", m_precision);

  }

  if(m_recallHasBeenSet)
  {
   payload.WithDouble("Recall", m_recall);

  }

  if(m_f1ScoreHasBeenSet)
  {
   payload.WithDouble("F1Score", m_f1Score);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
