/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AccessBudgetsPrivacyTemplateParametersOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

AccessBudgetsPrivacyTemplateParametersOutput::AccessBudgetsPrivacyTemplateParametersOutput(JsonView jsonValue) { *this = jsonValue; }

AccessBudgetsPrivacyTemplateParametersOutput& AccessBudgetsPrivacyTemplateParametersOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("budgetParameters")) {
    Aws::Utils::Array<JsonView> budgetParametersJsonList = jsonValue.GetArray("budgetParameters");
    for (unsigned budgetParametersIndex = 0; budgetParametersIndex < budgetParametersJsonList.GetLength(); ++budgetParametersIndex) {
      m_budgetParameters.push_back(budgetParametersJsonList[budgetParametersIndex].AsObject());
    }
    m_budgetParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceArn")) {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessBudgetsPrivacyTemplateParametersOutput::Jsonize() const {
  JsonValue payload;

  if (m_budgetParametersHasBeenSet) {
    Aws::Utils::Array<JsonValue> budgetParametersJsonList(m_budgetParameters.size());
    for (unsigned budgetParametersIndex = 0; budgetParametersIndex < budgetParametersJsonList.GetLength(); ++budgetParametersIndex) {
      budgetParametersJsonList[budgetParametersIndex].AsObject(m_budgetParameters[budgetParametersIndex].Jsonize());
    }
    payload.WithArray("budgetParameters", std::move(budgetParametersJsonList));
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("resourceArn", m_resourceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
