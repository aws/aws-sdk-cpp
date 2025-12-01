/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormMultiSelectQuestionAutomation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormMultiSelectQuestionAutomation::EvaluationFormMultiSelectQuestionAutomation(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormMultiSelectQuestionAutomation& EvaluationFormMultiSelectQuestionAutomation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Options")) {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("Options");
    for (unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex) {
      m_options.push_back(optionsJsonList[optionsIndex].AsObject());
    }
    m_optionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultOptionRefIds")) {
    Aws::Utils::Array<JsonView> defaultOptionRefIdsJsonList = jsonValue.GetArray("DefaultOptionRefIds");
    for (unsigned defaultOptionRefIdsIndex = 0; defaultOptionRefIdsIndex < defaultOptionRefIdsJsonList.GetLength();
         ++defaultOptionRefIdsIndex) {
      m_defaultOptionRefIds.push_back(defaultOptionRefIdsJsonList[defaultOptionRefIdsIndex].AsString());
    }
    m_defaultOptionRefIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AnswerSource")) {
    m_answerSource = jsonValue.GetObject("AnswerSource");
    m_answerSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormMultiSelectQuestionAutomation::Jsonize() const {
  JsonValue payload;

  if (m_optionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
    for (unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex) {
      optionsJsonList[optionsIndex].AsObject(m_options[optionsIndex].Jsonize());
    }
    payload.WithArray("Options", std::move(optionsJsonList));
  }

  if (m_defaultOptionRefIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> defaultOptionRefIdsJsonList(m_defaultOptionRefIds.size());
    for (unsigned defaultOptionRefIdsIndex = 0; defaultOptionRefIdsIndex < defaultOptionRefIdsJsonList.GetLength();
         ++defaultOptionRefIdsIndex) {
      defaultOptionRefIdsJsonList[defaultOptionRefIdsIndex].AsString(m_defaultOptionRefIds[defaultOptionRefIdsIndex]);
    }
    payload.WithArray("DefaultOptionRefIds", std::move(defaultOptionRefIdsJsonList));
  }

  if (m_answerSourceHasBeenSet) {
    payload.WithObject("AnswerSource", m_answerSource.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
