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

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
