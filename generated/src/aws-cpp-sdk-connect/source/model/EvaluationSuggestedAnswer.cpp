/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationSuggestedAnswer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationSuggestedAnswer::EvaluationSuggestedAnswer(JsonView jsonValue) { *this = jsonValue; }

EvaluationSuggestedAnswer& EvaluationSuggestedAnswer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetObject("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = EvaluationSuggestedAnswerStatusMapper::GetEvaluationSuggestedAnswerStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Input")) {
    m_input = jsonValue.GetObject("Input");
    m_inputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AnalysisType")) {
    m_analysisType =
        EvaluationQuestionAnswerAnalysisTypeMapper::GetEvaluationQuestionAnswerAnalysisTypeForName(jsonValue.GetString("AnalysisType"));
    m_analysisTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AnalysisDetails")) {
    m_analysisDetails = jsonValue.GetObject("AnalysisDetails");
    m_analysisDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationSuggestedAnswer::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithObject("Value", m_value.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", EvaluationSuggestedAnswerStatusMapper::GetNameForEvaluationSuggestedAnswerStatus(m_status));
  }

  if (m_inputHasBeenSet) {
    payload.WithObject("Input", m_input.Jsonize());
  }

  if (m_analysisTypeHasBeenSet) {
    payload.WithString("AnalysisType",
                       EvaluationQuestionAnswerAnalysisTypeMapper::GetNameForEvaluationQuestionAnswerAnalysisType(m_analysisType));
  }

  if (m_analysisDetailsHasBeenSet) {
    payload.WithObject("AnalysisDetails", m_analysisDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
