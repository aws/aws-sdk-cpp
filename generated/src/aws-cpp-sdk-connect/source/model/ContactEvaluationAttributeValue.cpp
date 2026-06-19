/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactEvaluationAttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactEvaluationAttributeValue::ContactEvaluationAttributeValue(JsonView jsonValue) { *this = jsonValue; }

ContactEvaluationAttributeValue& ContactEvaluationAttributeValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StringValue")) {
    m_stringValue = jsonValue.GetString("StringValue");
    m_stringValueHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactEvaluationAttributeValue::Jsonize() const {
  JsonValue payload;

  if (m_stringValueHasBeenSet) {
    payload.WithString("StringValue", m_stringValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
