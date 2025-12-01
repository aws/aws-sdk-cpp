/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormLanguageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormLanguageConfiguration::EvaluationFormLanguageConfiguration(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormLanguageConfiguration& EvaluationFormLanguageConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FormLanguage")) {
    m_formLanguage = EvaluationFormLanguageCodeMapper::GetEvaluationFormLanguageCodeForName(jsonValue.GetString("FormLanguage"));
    m_formLanguageHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormLanguageConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_formLanguageHasBeenSet) {
    payload.WithString("FormLanguage", EvaluationFormLanguageCodeMapper::GetNameForEvaluationFormLanguageCode(m_formLanguage));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
