/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormValidationFindingItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormValidationFindingItem::EvaluationFormValidationFindingItem(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormValidationFindingItem& EvaluationFormValidationFindingItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RefId")) {
    m_refId = jsonValue.GetString("RefId");
    m_refIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Property")) {
    m_property = jsonValue.GetString("Property");
    m_propertyHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormValidationFindingItem::Jsonize() const {
  JsonValue payload;

  if (m_refIdHasBeenSet) {
    payload.WithString("RefId", m_refId);
  }

  if (m_propertyHasBeenSet) {
    payload.WithString("Property", m_property);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
