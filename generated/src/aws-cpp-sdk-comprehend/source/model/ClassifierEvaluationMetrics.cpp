/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ClassifierEvaluationMetrics.h>
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

ClassifierEvaluationMetrics::ClassifierEvaluationMetrics() : 
    m_accuracy(0.0),
    m_accuracyHasBeenSet(false),
    m_precision(0.0),
    m_precisionHasBeenSet(false),
    m_recall(0.0),
    m_recallHasBeenSet(false),
    m_f1Score(0.0),
    m_f1ScoreHasBeenSet(false),
    m_microPrecision(0.0),
    m_microPrecisionHasBeenSet(false),
    m_microRecall(0.0),
    m_microRecallHasBeenSet(false),
    m_microF1Score(0.0),
    m_microF1ScoreHasBeenSet(false),
    m_hammingLoss(0.0),
    m_hammingLossHasBeenSet(false)
{
}

ClassifierEvaluationMetrics::ClassifierEvaluationMetrics(JsonView jsonValue) : 
    m_accuracy(0.0),
    m_accuracyHasBeenSet(false),
    m_precision(0.0),
    m_precisionHasBeenSet(false),
    m_recall(0.0),
    m_recallHasBeenSet(false),
    m_f1Score(0.0),
    m_f1ScoreHasBeenSet(false),
    m_microPrecision(0.0),
    m_microPrecisionHasBeenSet(false),
    m_microRecall(0.0),
    m_microRecallHasBeenSet(false),
    m_microF1Score(0.0),
    m_microF1ScoreHasBeenSet(false),
    m_hammingLoss(0.0),
    m_hammingLossHasBeenSet(false)
{
  *this = jsonValue;
}

ClassifierEvaluationMetrics& ClassifierEvaluationMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Accuracy"))
  {
    m_accuracy = jsonValue.GetDouble("Accuracy");

    m_accuracyHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("MicroPrecision"))
  {
    m_microPrecision = jsonValue.GetDouble("MicroPrecision");

    m_microPrecisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MicroRecall"))
  {
    m_microRecall = jsonValue.GetDouble("MicroRecall");

    m_microRecallHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MicroF1Score"))
  {
    m_microF1Score = jsonValue.GetDouble("MicroF1Score");

    m_microF1ScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HammingLoss"))
  {
    m_hammingLoss = jsonValue.GetDouble("HammingLoss");

    m_hammingLossHasBeenSet = true;
  }

  return *this;
}

JsonValue ClassifierEvaluationMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_accuracyHasBeenSet)
  {
   payload.WithDouble("Accuracy", m_accuracy);

  }

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

  if(m_microPrecisionHasBeenSet)
  {
   payload.WithDouble("MicroPrecision", m_microPrecision);

  }

  if(m_microRecallHasBeenSet)
  {
   payload.WithDouble("MicroRecall", m_microRecall);

  }

  if(m_microF1ScoreHasBeenSet)
  {
   payload.WithDouble("MicroF1Score", m_microF1Score);

  }

  if(m_hammingLossHasBeenSet)
  {
   payload.WithDouble("HammingLoss", m_hammingLoss);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
