/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/TrainingResultV2.h>
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

TrainingResultV2::TrainingResultV2() : 
    m_dataValidationMetricsHasBeenSet(false),
    m_trainingMetricsV2HasBeenSet(false),
    m_variableImportanceMetricsHasBeenSet(false),
    m_aggregatedVariablesImportanceMetricsHasBeenSet(false)
{
}

TrainingResultV2::TrainingResultV2(JsonView jsonValue) : 
    m_dataValidationMetricsHasBeenSet(false),
    m_trainingMetricsV2HasBeenSet(false),
    m_variableImportanceMetricsHasBeenSet(false),
    m_aggregatedVariablesImportanceMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingResultV2& TrainingResultV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataValidationMetrics"))
  {
    m_dataValidationMetrics = jsonValue.GetObject("dataValidationMetrics");

    m_dataValidationMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingMetricsV2"))
  {
    m_trainingMetricsV2 = jsonValue.GetObject("trainingMetricsV2");

    m_trainingMetricsV2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("variableImportanceMetrics"))
  {
    m_variableImportanceMetrics = jsonValue.GetObject("variableImportanceMetrics");

    m_variableImportanceMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aggregatedVariablesImportanceMetrics"))
  {
    m_aggregatedVariablesImportanceMetrics = jsonValue.GetObject("aggregatedVariablesImportanceMetrics");

    m_aggregatedVariablesImportanceMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingResultV2::Jsonize() const
{
  JsonValue payload;

  if(m_dataValidationMetricsHasBeenSet)
  {
   payload.WithObject("dataValidationMetrics", m_dataValidationMetrics.Jsonize());

  }

  if(m_trainingMetricsV2HasBeenSet)
  {
   payload.WithObject("trainingMetricsV2", m_trainingMetricsV2.Jsonize());

  }

  if(m_variableImportanceMetricsHasBeenSet)
  {
   payload.WithObject("variableImportanceMetrics", m_variableImportanceMetrics.Jsonize());

  }

  if(m_aggregatedVariablesImportanceMetricsHasBeenSet)
  {
   payload.WithObject("aggregatedVariablesImportanceMetrics", m_aggregatedVariablesImportanceMetrics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
