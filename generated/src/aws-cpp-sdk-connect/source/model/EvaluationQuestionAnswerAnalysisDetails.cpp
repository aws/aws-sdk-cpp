/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationQuestionAnswerAnalysisDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationQuestionAnswerAnalysisDetails::EvaluationQuestionAnswerAnalysisDetails(JsonView jsonValue) { *this = jsonValue; }

EvaluationQuestionAnswerAnalysisDetails& EvaluationQuestionAnswerAnalysisDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("GenAI")) {
    m_genAI = jsonValue.GetObject("GenAI");
    m_genAIHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContactLens")) {
    m_contactLens = jsonValue.GetObject("ContactLens");
    m_contactLensHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationQuestionAnswerAnalysisDetails::Jsonize() const {
  JsonValue payload;

  if (m_genAIHasBeenSet) {
    payload.WithObject("GenAI", m_genAI.Jsonize());
  }

  if (m_contactLensHasBeenSet) {
    payload.WithObject("ContactLens", m_contactLens.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
