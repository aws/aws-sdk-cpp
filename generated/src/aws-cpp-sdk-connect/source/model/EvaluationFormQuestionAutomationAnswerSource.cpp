/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormQuestionAutomationAnswerSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormQuestionAutomationAnswerSource::EvaluationFormQuestionAutomationAnswerSource(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormQuestionAutomationAnswerSource& EvaluationFormQuestionAutomationAnswerSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceType")) {
    m_sourceType = EvaluationFormQuestionAutomationAnswerSourceTypeMapper::GetEvaluationFormQuestionAutomationAnswerSourceTypeForName(
        jsonValue.GetString("SourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormQuestionAutomationAnswerSource::Jsonize() const {
  JsonValue payload;

  if (m_sourceTypeHasBeenSet) {
    payload.WithString(
        "SourceType",
        EvaluationFormQuestionAutomationAnswerSourceTypeMapper::GetNameForEvaluationFormQuestionAutomationAnswerSourceType(m_sourceType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
