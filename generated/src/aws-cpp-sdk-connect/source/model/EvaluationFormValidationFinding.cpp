/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormValidationFinding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormValidationFinding::EvaluationFormValidationFinding(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormValidationFinding& EvaluationFormValidationFinding::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IssueCode")) {
    m_issueCode = jsonValue.GetString("IssueCode");
    m_issueCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Items")) {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("Items");
    for (unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex) {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
    m_itemsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Suggestion")) {
    m_suggestion = jsonValue.GetString("Suggestion");
    m_suggestionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Severity")) {
    m_severity =
        EvaluationFormValidationFindingSeverityMapper::GetEvaluationFormValidationFindingSeverityForName(jsonValue.GetString("Severity"));
    m_severityHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormValidationFinding::Jsonize() const {
  JsonValue payload;

  if (m_issueCodeHasBeenSet) {
    payload.WithString("IssueCode", m_issueCode);
  }

  if (m_itemsHasBeenSet) {
    Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
    for (unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex) {
      itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
    }
    payload.WithArray("Items", std::move(itemsJsonList));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_suggestionHasBeenSet) {
    payload.WithString("Suggestion", m_suggestion);
  }

  if (m_severityHasBeenSet) {
    payload.WithString("Severity",
                       EvaluationFormValidationFindingSeverityMapper::GetNameForEvaluationFormValidationFindingSeverity(m_severity));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
