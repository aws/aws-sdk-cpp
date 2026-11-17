/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/ChooseOneQuestion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

ChooseOneQuestion::ChooseOneQuestion(JsonView jsonValue) { *this = jsonValue; }

ChooseOneQuestion& ChooseOneQuestion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("question")) {
    m_question = jsonValue.GetString("question");
    m_questionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("options")) {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("options");
    for (unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex) {
      m_options.push_back(optionsJsonList[optionsIndex].AsObject());
    }
    m_optionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ChooseOneQuestion::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_questionHasBeenSet) {
    payload.WithString("question", m_question);
  }

  if (m_optionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
    for (unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex) {
      optionsJsonList[optionsIndex].AsObject(m_options[optionsIndex].Jsonize());
    }
    payload.WithArray("options", std::move(optionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
