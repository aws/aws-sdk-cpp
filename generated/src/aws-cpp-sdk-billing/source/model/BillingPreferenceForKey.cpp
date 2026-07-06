/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingPreferenceForKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

BillingPreferenceForKey::BillingPreferenceForKey(JsonView jsonValue) { *this = jsonValue; }

BillingPreferenceForKey& BillingPreferenceForKey::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = PreferenceValueMapper::GetPreferenceValueForName(jsonValue.GetString("value"));
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue BillingPreferenceForKey::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", PreferenceValueMapper::GetNameForPreferenceValue(m_value));
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
