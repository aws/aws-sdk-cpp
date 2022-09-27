/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ModelVersionEvaluation.h>
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

ModelVersionEvaluation::ModelVersionEvaluation() : 
    m_outputVariableNameHasBeenSet(false),
    m_evaluationScoreHasBeenSet(false),
    m_predictionExplanationsHasBeenSet(false)
{
}

ModelVersionEvaluation::ModelVersionEvaluation(JsonView jsonValue) : 
    m_outputVariableNameHasBeenSet(false),
    m_evaluationScoreHasBeenSet(false),
    m_predictionExplanationsHasBeenSet(false)
{
  *this = jsonValue;
}

ModelVersionEvaluation& ModelVersionEvaluation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outputVariableName"))
  {
    m_outputVariableName = jsonValue.GetString("outputVariableName");

    m_outputVariableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evaluationScore"))
  {
    m_evaluationScore = jsonValue.GetString("evaluationScore");

    m_evaluationScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("predictionExplanations"))
  {
    m_predictionExplanations = jsonValue.GetObject("predictionExplanations");

    m_predictionExplanationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelVersionEvaluation::Jsonize() const
{
  JsonValue payload;

  if(m_outputVariableNameHasBeenSet)
  {
   payload.WithString("outputVariableName", m_outputVariableName);

  }

  if(m_evaluationScoreHasBeenSet)
  {
   payload.WithString("evaluationScore", m_evaluationScore);

  }

  if(m_predictionExplanationsHasBeenSet)
  {
   payload.WithObject("predictionExplanations", m_predictionExplanations.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
