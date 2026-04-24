/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormTextQuestionProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormTextQuestionProperties::EvaluationFormTextQuestionProperties(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormTextQuestionProperties& EvaluationFormTextQuestionProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Automation")) {
    m_automation = jsonValue.GetObject("Automation");
    m_automationHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormTextQuestionProperties::Jsonize() const {
  JsonValue payload;

  if (m_automationHasBeenSet) {
    payload.WithObject("Automation", m_automation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
