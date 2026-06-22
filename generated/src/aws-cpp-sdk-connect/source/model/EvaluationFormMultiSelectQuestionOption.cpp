/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormMultiSelectQuestionOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormMultiSelectQuestionOption::EvaluationFormMultiSelectQuestionOption(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormMultiSelectQuestionOption& EvaluationFormMultiSelectQuestionOption::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RefId")) {
    m_refId = jsonValue.GetString("RefId");
    m_refIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Text")) {
    m_text = jsonValue.GetString("Text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Score")) {
    m_score = jsonValue.GetInteger("Score");
    m_scoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutomaticFail")) {
    m_automaticFail = jsonValue.GetBool("AutomaticFail");
    m_automaticFailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutomaticFailConfiguration")) {
    m_automaticFailConfiguration = jsonValue.GetObject("AutomaticFailConfiguration");
    m_automaticFailConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PointsConfiguration")) {
    m_pointsConfiguration = jsonValue.GetObject("PointsConfiguration");
    m_pointsConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormMultiSelectQuestionOption::Jsonize() const {
  JsonValue payload;

  if (m_refIdHasBeenSet) {
    payload.WithString("RefId", m_refId);
  }

  if (m_textHasBeenSet) {
    payload.WithString("Text", m_text);
  }

  if (m_scoreHasBeenSet) {
    payload.WithInteger("Score", m_score);
  }

  if (m_automaticFailHasBeenSet) {
    payload.WithBool("AutomaticFail", m_automaticFail);
  }

  if (m_automaticFailConfigurationHasBeenSet) {
    payload.WithObject("AutomaticFailConfiguration", m_automaticFailConfiguration.Jsonize());
  }

  if (m_pointsConfigurationHasBeenSet) {
    payload.WithObject("PointsConfiguration", m_pointsConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
