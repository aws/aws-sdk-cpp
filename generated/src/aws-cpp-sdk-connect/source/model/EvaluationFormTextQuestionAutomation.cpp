/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormTextQuestionAutomation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormTextQuestionAutomation::EvaluationFormTextQuestionAutomation(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormTextQuestionAutomation& EvaluationFormTextQuestionAutomation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AnswerSource")) {
    m_answerSource = jsonValue.GetObject("AnswerSource");
    m_answerSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormTextQuestionAutomation::Jsonize() const {
  JsonValue payload;

  if (m_answerSourceHasBeenSet) {
    payload.WithObject("AnswerSource", m_answerSource.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
