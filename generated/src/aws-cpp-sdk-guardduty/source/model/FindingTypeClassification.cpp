/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/FindingTypeClassification.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

FindingTypeClassification::FindingTypeClassification(JsonView jsonValue) { *this = jsonValue; }

FindingTypeClassification& FindingTypeClassification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingType")) {
    m_findingType = jsonValue.GetString("findingType");
    m_findingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("classification")) {
    m_classification = jsonValue.GetString("classification");
    m_classificationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInt64("count");
    m_countHasBeenSet = true;
  }
  if (jsonValue.ValueExists("percentage")) {
    m_percentage = jsonValue.GetDouble("percentage");
    m_percentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingTypeClassification::Jsonize() const {
  JsonValue payload;

  if (m_findingTypeHasBeenSet) {
    payload.WithString("findingType", m_findingType);
  }

  if (m_classificationHasBeenSet) {
    payload.WithString("classification", m_classification);
  }

  if (m_countHasBeenSet) {
    payload.WithInt64("count", m_count);
  }

  if (m_percentageHasBeenSet) {
    payload.WithDouble("percentage", m_percentage);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
