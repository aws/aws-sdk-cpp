/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/Amount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

Amount::Amount(JsonView jsonValue) { *this = jsonValue; }

Amount& Amount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("currencyCode")) {
    m_currencyCode = jsonValue.GetString("currencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currencyAmount")) {
    m_currencyAmount = jsonValue.GetString("currencyAmount");
    m_currencyAmountHasBeenSet = true;
  }
  return *this;
}

JsonValue Amount::Jsonize() const {
  JsonValue payload;

  if (m_currencyCodeHasBeenSet) {
    payload.WithString("currencyCode", m_currencyCode);
  }

  if (m_currencyAmountHasBeenSet) {
    payload.WithString("currencyAmount", m_currencyAmount);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
