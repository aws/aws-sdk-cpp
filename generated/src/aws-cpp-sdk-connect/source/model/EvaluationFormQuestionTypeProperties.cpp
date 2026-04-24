/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormQuestionTypeProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormQuestionTypeProperties::EvaluationFormQuestionTypeProperties(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormQuestionTypeProperties& EvaluationFormQuestionTypeProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Numeric")) {
    m_numeric = jsonValue.GetObject("Numeric");
    m_numericHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SingleSelect")) {
    m_singleSelect = jsonValue.GetObject("SingleSelect");
    m_singleSelectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Text")) {
    m_text = jsonValue.GetObject("Text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MultiSelect")) {
    m_multiSelect = jsonValue.GetObject("MultiSelect");
    m_multiSelectHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormQuestionTypeProperties::Jsonize() const {
  JsonValue payload;

  if (m_numericHasBeenSet) {
    payload.WithObject("Numeric", m_numeric.Jsonize());
  }

  if (m_singleSelectHasBeenSet) {
    payload.WithObject("SingleSelect", m_singleSelect.Jsonize());
  }

  if (m_textHasBeenSet) {
    payload.WithObject("Text", m_text.Jsonize());
  }

  if (m_multiSelectHasBeenSet) {
    payload.WithObject("MultiSelect", m_multiSelect.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
