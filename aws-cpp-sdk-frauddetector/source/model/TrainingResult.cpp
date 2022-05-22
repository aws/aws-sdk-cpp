/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/TrainingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

TrainingResult::TrainingResult() : 
    m_dataValidationMetricsHasBeenSet(false),
    m_trainingMetricsHasBeenSet(false),
    m_variableImportanceMetricsHasBeenSet(false)
{
}

TrainingResult::TrainingResult(JsonView jsonValue) : 
    m_dataValidationMetricsHasBeenSet(false),
    m_trainingMetricsHasBeenSet(false),
    m_variableImportanceMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingResult& TrainingResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataValidationMetrics"))
  {
    m_dataValidationMetrics = jsonValue.GetObject("dataValidationMetrics");

    m_dataValidationMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingMetrics"))
  {
    m_trainingMetrics = jsonValue.GetObject("trainingMetrics");

    m_trainingMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variableImportanceMetrics"))
  {
    m_variableImportanceMetrics = jsonValue.GetObject("variableImportanceMetrics");

    m_variableImportanceMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingResult::Jsonize() const
{
  JsonValue payload;

  if(m_dataValidationMetricsHasBeenSet)
  {
   payload.WithObject("dataValidationMetrics", m_dataValidationMetrics.Jsonize());

  }

  if(m_trainingMetricsHasBeenSet)
  {
   payload.WithObject("trainingMetrics", m_trainingMetrics.Jsonize());

  }

  if(m_variableImportanceMetricsHasBeenSet)
  {
   payload.WithObject("variableImportanceMetrics", m_variableImportanceMetrics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
