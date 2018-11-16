/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_f1ScoreHasBeenSet(false)
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
    m_f1ScoreHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
